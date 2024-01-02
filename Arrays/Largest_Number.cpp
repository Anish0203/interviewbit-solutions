bool comp(int a,int b)   //3,30
{
    string x=to_string(a)+to_string(b);     //330
    string y=to_string(b)+to_string(a);     //303
    return x>y;
}
string Solution::largestNumber(const vector<int> &A) {
    vector<int>v=A;
    sort(v.begin(),v.end(),comp);
    string ans="";
    for(auto i:v)
      ans+=to_string(i);
    while(ans.size()&&ans[0]=='0')
      ans.erase(ans.begin());
    if(ans.size()==0)
      return "0";
    return ans;
}
