vector<int> Solution::solve(vector<int> &A) {
    int n=A.size(),i,j;
    i=0;j=n-1;
    vector<int>ans;
    while(i<=j)
    {
        if((A[i]*A[i])>(A[j]*A[j]))
        {
            ans.push_back(A[i]*A[i]);
            i++;
        }
        else
        {
            ans.push_back(A[j]*A[j]);
            j--;
        }
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
