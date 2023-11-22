int Solution::solve(vector<int> &A) {
    int n=A.size(),i;
    int suff[n];
    int ans=INT_MIN;
    suff[n-1]=A[n-1];
    for(i=n-2;i>=0;i--)
        suff[i]=max(suff[i+1],A[i]);
    set<int>s;
    s.insert(A[0]);
    for(i=1;i<n-1;i++)
    {
        if(suff[i+1]<=A[i])
        {
            s.insert(A[i]);
            continue;
        }
        int right=suff[i+1];
        auto it=s.lower_bound(A[i]);
        if(it==s.begin())
        {
            s.insert(A[i]);
            continue;
        }
        it--;
        int left=*it;
        ans=max(ans,A[i]+left+right);
        s.insert(A[i]);
    }
    
    if(ans==INT_MIN)
        return -1;
    return ans;
}
