int Solution::solve(int A, vector<int> &B) {
    vector<int>v=B;
    int n=A,i;
    vector<int>pre=v;
    for(i=1;i<n;i++)
        pre[i]+=pre[i-1];
    if(pre[n-1]%3)
        return 0;
    int req=pre[n-1]/3;
    int sum=0,ans=0;
    vector<int>count(n,0);
    for(i=0;i<n;i++)
    {
        if(pre[i]==req)
            count[i]++;
        if((i-1)>=0)
            count[i]+=count[i-1];
    }
    for(i=n-1;i>=2;i--)
    {
        sum+=v[i];
        if(sum==req)
            ans+=count[i-2];
    }
    return ans;
}
/*
Following code works only for numbers >=0
    for(i=n-1;i>=2;i--)
    {
        sum+=v[i];
        if(sum<req)
        continue;
        if(sum>req)
        break;
        int j=lower_bound(pre.begin(),pre.end(),req)-pre.begin();
        if(pre[j]!=req)
        break;
        int k=upper_bound(pre.begin(),pre.begin()+i-1,req)-pre.begin();
        ans+=k-j;
    }*/
