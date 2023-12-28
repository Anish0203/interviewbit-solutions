int Solution::maximumGap(const vector<int> &A) {
    int mini=A[0],maxi=A[0],i,n=A.size();
    for(i=0;i<n;i++)
    {
        mini=min(mini,A[i]);
        maxi=max(maxi,A[i]);
    }
    float gap=(float)(maxi-mini)/(float)(n-1);
    vector<pair<int,int>>bucket(n-1,{INT_MAX,INT_MIN}); //{min,max}, always keep n+1 buckets, consider case 1,5,10
    for(i=0;i<n;i++)
    {
        if(A[i]==mini or A[i]==maxi)
          continue;
        int j=(float)(A[i]-mini)/gap;
        bucket[j].first=min(bucket[j].first,A[i]);
        bucket[j].second=max(bucket[j].second,A[i]);
    }
    int prev_val=mini;
    int maxgap=0;
    for(i=0;i<n-1;i++)
    {
        if(bucket[i].first==INT_MAX)
          continue;
        maxgap=max(maxgap,bucket[i].first-prev_val);
        prev_val=bucket[i].second;
    }
    maxgap=max(maxgap,maxi-prev_val);
    return maxgap;
}
