int Solution::solve(vector<vector<int> > &A, int B) {
    vector<vector<int>>mat=A;
    int i,j,m=mat.size(),n=mat[0].size();
    for(i=0;i<m;i++)
    {
        for(j=1;j<n;j++)
        mat[i][j]+=mat[i][j-1];
    }
    for(j=0;j<n;j++)
    {
        for(i=1;i<m;i++)
        mat[i][j]+=mat[i-1][j];
    }
    int ans=mat[B-1][B-1];
    for(i=B-1;i<m;i++)
    {
        for(j=B-1;j<n;j++)
        {
            int val=mat[i][j];
            if(i-B>=0)
            val-=mat[i-B][j];
            if(j-B>=0)
            val-=mat[i][j-B];
            if(i-B>=0 and j-B>=0)
            val+=mat[i-B][j-B];
            ans=max(ans,val);
        }
    }
    return ans;
}
