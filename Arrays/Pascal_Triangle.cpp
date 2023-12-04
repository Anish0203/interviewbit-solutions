vector<vector<int> > Solution::solve(int A) {
    vector<vector<int>>ans;
    if(A==0)
        return ans;
    vector<int>v1{1};
    ans.push_back(v1);
    if(A==1)
        return ans;
    vector<int>v2{1,1};
    ans.push_back(v2);
    if(A==2)
        return ans;
    for(int i=2;i<A;i++)
    {
        vector<int>temp(i+1);
        temp[0]=1;
        int j;
        for(j=1;j<i;j++)
            temp[j]=ans[i-1][j]+ans[i-1][j-1];
        temp[j]=1;
        ans.push_back(temp);
    }
    return ans;
    
}
