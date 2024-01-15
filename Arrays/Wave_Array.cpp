vector<int> Solution::wave(vector<int> &A) {
    vector<int>v=A;
    sort(v.begin(),v.end());
    int i;
    for(i=1;i<v.size();i+=2)
        swap(v[i],v[i-1]);
    return v;
}
/*
1,2,3,4,5,6,7,8
2,1,4,3,6,5,8,7

1,2,3,4,5
2,1,4,3,5
*/
