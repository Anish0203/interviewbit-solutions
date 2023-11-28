vector<int>v;
pair<int,int> minmax(int left,int right)
{
    if(left==right)
    return make_pair(v[left],v[left]);
    if(right-left==1)
    return make_pair(min(v[left],v[right]),max(v[left],v[right]));
    
    int mid=(left+right)/2;
    pair<int,int>l=minmax(left,mid);
    pair<int,int>r=minmax(mid+1,right);
    return make_pair(min(l.first,r.first),max(l.second,r.second));
}
int Solution::solve(vector<int> &A) {
    v=A;
    pair<int,int>p=minmax(0,v.size()-1);
    return (p.first+p.second);
}
