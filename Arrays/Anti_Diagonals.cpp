vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    unordered_map<int,vector<int>>mm;
    int i,j;
    int m=A.size(),n=A[0].size();
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            mm[i+j].push_back(A[i][j]);
    }
    vector<vector<int>>ans;
    for(i=0;i<=(m+n-2);i++)  //for bottom right sum=m+n-2
        ans.push_back(mm[i]);
    return ans;
}
