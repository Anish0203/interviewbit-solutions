int Solution::solve(vector<int> &A, int B) {
    int i,n=A.size();
    vector<int>pre(n),suff(n);
    pre[0]=A[0];suff[n-1]=A[n-1];
    for(i=1;i<n;i++)
        pre[i]=A[i]+pre[i-1];
    for(i=n-2;i>=0;i--)
        suff[i]=A[i]+suff[i+1];
    int ans=max(pre[B-1],suff[n-B]);
    for(i=1;i<B;i++)
        ans=max(ans,pre[i-1]+suff[n-(B-i)]);
    return ans;
}
