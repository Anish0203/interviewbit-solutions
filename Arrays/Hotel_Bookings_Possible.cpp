bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
    int n=arrive.size(),i;
    map<int,int>m;
    for(i=0;i<n;i++)
    {
        if(arrive[i]==depart[i])
        continue;
        m[arrive[i]]++;
        m[depart[i]]--;
    }
    int val=0;
    for(auto it:m)
    {
        val+=it.second;
        //cout<<it.first<<" "<<it.second<<" "<<val<<endl;
        if(val>K)
        return false;
    }
    return true;
    /*vector<pair<int,int>>v;
    for(i=0;i<n;i++)
        v.push_back({arrive[i],depart[i]});
    sort(v.begin(),v.end());
    int c=1;
    priority_queue<int,vector<int>,greater<int>>pq;
    for(i=0;i<n;i++)
    {
        if(v[i].first==v[i].second)
        continue;
        while(pq.size() && pq.top()<=v[i].first)
        pq.pop();
        pq.push(v[i].second);
        if(pq.size()>K)
        return false;
    }
    return true;*/
}
/*
Failed test cases:
A : [ 1, 2, 3 ]
B : [ 2, 3, 4 ]
C : 1

*/
