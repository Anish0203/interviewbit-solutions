vector<int> Solution::flip(string A) {
    int n=A.length(),i,j;
    vector<int>ans;
    int count0=0,count1=0,maxi=0,start=-1,end=-1;
    i=0;j=0;
    while(j<n)
    {
        if(A[j]=='1')
            count1++;
        else
            count0++;
        if(count1>count0)
        {
            count0=0;
            count1=0;
            i=j+1;
        }
        if(count0-count1>maxi)
        {
            maxi=count0-count1;
            start=i+1;
            end=j+1;
        }
        j++;
    }
    if(start==-1)
        return ans;
    ans={start,end};
    return ans;
}
