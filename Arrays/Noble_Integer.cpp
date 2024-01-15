int Solution::solve(vector<int> &A) {
    vector<int>v=A;
    int n=v.size(),i;
    sort(v.begin(),v.end());
    for(i=0;i<n;i++)
    {
        if((i+1)<n && v[i+1]==v[i])
        continue;
        if(v[i]==(n-i-1))
        return 1;
    }
    return -1;
}
