// Kadane Algo

int Solution::maxSubArray(const vector<int> &A) {
    int n=A.size(),i;
    int ans=A[0],val=max(0,A[0]);
    for(i=1;i<n;i++)
    {
        val+=A[i];
        ans=max(ans,val);
        if(val<0)
            val=0;
    }
    return ans;
}
