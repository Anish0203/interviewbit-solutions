int Solution::firstMissingPositive(vector<int> &A) {
    int n=A.size(),i;
    for(i=0;i<n;i++)
    {
        if(A[i]<=0 || A[i]>=n)//second condition is also important
        continue;
        if(A[i]==i+1)//test case failed bcoz I didn't give this condition
        continue;
        if(A[i]==A[A[i]-1])//if there are duplicates, I am converting it to -1
        {
            A[i]=-1;
            continue;
        }
        swap(A[i],A[A[i]-1]);
        i--;
    }
    for(i=0;i<n;i++)
    {
        if(A[i]!=i+1)
        return i+1;
    }
    return i+1;
}
