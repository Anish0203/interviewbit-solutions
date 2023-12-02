vector<int> Solution::getRow(int A) {
    vector<int>ans{1};
    for(int i=1;i<=A;i++)
    {
        vector<int>temp(ans.size()+1);
        temp[0]=ans[0];
        int j;
        for(j=1;j<temp.size()-1;j++)
            temp[j]=ans[j-1]+ans[j];
        temp[j]=1;
        ans=temp;
    }
    return ans;
}
/*
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
*/
