int Solution::perfectPeak(vector<int> &A) {
    int n=A.size(),i;
    int pre[n],suff[n];
    pre[0]=A[0];
    for(i=1;i<n;i++)
        pre[i]=max(pre[i-1],A[i]);
    suff[n-1]=A[n-1];
    for(i=n-2;i>=0;i--)
        suff[i]=min(suff[i+1],A[i]);
    for(i=1;i<n-1;i++)
    {
        if(A[i]>pre[i-1] and A[i]<suff[i+1])
            return 1;
    }
    return 0;
    
}
