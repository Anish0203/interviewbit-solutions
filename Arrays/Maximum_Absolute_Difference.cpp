int Solution::maxArr(vector<int> &A) {
    int n=A.size(),i;
    int pre1[n],pre2[n],suff1[n],suff2[n];
    pre1[0]=A[0];pre2[0]=-A[0];
    for(i=1;i<n;i++)
    {
        pre1[i]=max(pre1[i-1],A[i]-i);
        pre2[i]=max(pre2[i-1],-A[i]-i);
    }
    suff1[n-1]=A[n-1]+n-1;suff2[n-1]=-A[n-1]+n-1;
    for(i=n-2;i>=0;i--)
    {
        suff1[i]=max(suff1[i+1],A[i]+i);
        suff2[i]=max(suff2[i+1],-A[i]+i);
    }
    int ans=0;
    for(i=0;i<n;i++)
    {
        if((i+1)<n)
        ans=max({ans,suff1[i+1]-A[i]-i,suff2[i+1]+A[i]-i});
        if((i-1)>=0)
        ans=max({ans,pre1[i-1]-A[i]+i,pre2[i-1]+A[i]+i});
    }
    return ans;
}
