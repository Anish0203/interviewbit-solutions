vector<int> Solution::plusOne(vector<int> &A) {
    vector<int>ans=A;
    while(ans.size()>0 && ans[0]==0)
        ans.erase(ans.begin());
    if(ans.size()==0)
    {
        ans.push_back(1);
        return ans;
    }
    int i=ans.size()-1;
    while(i>=0 && ans[i]==9)
    {
        ans[i]=0;
        i--;
    }
    if(i>=0)
    {
        ans[i]+=1;
        return ans;
    }
    ans.insert(ans.begin(),1);
    return ans;
}
