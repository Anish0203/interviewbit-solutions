vector<int> Solution::subUnsort(vector<int> &A) {
    int n=A.size(),i;
    vector<int>v=A;
    sort(v.begin(),v.end());
    int l=-1,r=-1;
    for(i=0;i<n;i++)
    {
        if(v[i]!=A[i])
        {
            l=i;
            break;
        }
    }
    if(l==-1)
    {
        vector<int>temp{-1};
        return temp;
    }
    for(i=n-1;i>=0;i--)
    {
        if(v[i]!=A[i])
        {
            r=i;
            break;
        }
    }
    vector<int>ans{l,r};
    return ans;
}
