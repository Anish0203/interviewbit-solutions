int Solution::solve(vector<int> &A) {
    int n=A.size(),i,toteven=0,totodd=0;
    for(i=0;i<n;i++)
    {
        if(i%2)
            totodd+=A[i];
        else
            toteven+=A[i];
    }
    int ans=0,currodd=0,curreven=0;
    for(i=0;i<n;i++)
    {
        int remodd=totodd-currodd;
        int remeven=toteven-curreven;
        if(i%2)
            remodd-=A[i];
        else
            remeven-=A[i];
        if((currodd+remeven)==(curreven+remodd))
            ans++;
        if(i%2)
            currodd+=A[i];
        else
            curreven+=A[i];
    }
    return ans;
}
