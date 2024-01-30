int Solution::maximumGap(const vector<int> &A) {
    vector<pair<int,int>>v;
    int n=A.size(),i;
    for(i=0;i<n;i++)
        v.push_back({A[i],i});
    sort(v.begin(),v.end());
    int maxi=v[n-1].second,ans=0;
    for(i=n-2;i>=0;i--)
    {
        maxi=max(maxi,v[i].second);
        ans=max(ans,maxi-v[i].second);
    }
    return ans;
    /*
    set<pair<int,int>>s;
    int i,ans=0;
    for(i=A.size()-1;i>=0;i--)
    {
        if(!s.size())
        {
            s.insert({A[i],i});
            continue;
        }
        auto j=s.lower_bound({A[i],-1});
        if(j==s.end())
        {
            s.insert({A[i],i});
            continue;
        }
        ans=max(ans,(*j).second-i);
    }
    return ans;
    */
}
