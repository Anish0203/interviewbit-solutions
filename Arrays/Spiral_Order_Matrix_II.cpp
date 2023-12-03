vector<vector<int> > Solution::generateMatrix(int A) {
    int cnt=1,i,j;
    vector<vector<int>>ans(A,vector<int>(A,0));
    i=0;j=0;
    while(cnt<=A*A)
    {
        for(;j<A;j++)
        {
            ans[i][j]=cnt++;
            if((j+1<A and ans[i][j+1]!=0) or j+1==A)
                break;
        }
        i++;
        if(cnt>A*A)
            break;
        for(;i<A;i++)
        {
            ans[i][j]=cnt++;
            if((i+1<A and ans[i+1][j]!=0) or i+1==A)
                break;
        }
        j--;
        if(cnt>A*A)
            break;
        for(;j>=0;j--)
        {
            ans[i][j]=cnt++;
            if((j-1>=0 and ans[i][j-1]!=0) or j-1<0)
                break;
        }
        i--;
        if(cnt>A*A)
            break;
        for(;i>=0;i--)
        {
            ans[i][j]=cnt++;
            if((i-1>=0 and ans[i-1][j]!=0) or i-1<0)
                break;
        }
        j++;
    }
    return ans;
}
