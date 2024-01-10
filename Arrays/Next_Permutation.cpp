vector<int> Solution::nextPermutation(vector<int> &A) {
    int n=A.size(),i;
    for(i=n-1;i>=1;i--)
    {
        if(A[i]>A[i-1])
        {
           int j,ele,ind;
           for(j=i;j<n;j++)
           {
               if(A[j]>A[i-1])
               {
                   ele=A[j];
                   ind=j;
               }
           }
           swap(A[i-1],A[ind]);
           sort(A.begin()+i,A.end());
           return A;
        }
    }
    sort(A.begin(),A.end());
    return A;
}
