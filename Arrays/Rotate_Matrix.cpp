void Solution::rotate(vector<vector<int> > &A) {
    int n=A.size(),i,j;
    for(i=0;i<n/2;i++)
    {
        for(j=i;j<n-i-1;j++)
        {
            swap(A[i][j],A[n-j-1][i]);
            swap(A[n-j-1][i],A[n-i-1][n-j-1]);
            swap(A[n-i-1][n-j-1],A[j][n-i-1]);
        }
    }
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
