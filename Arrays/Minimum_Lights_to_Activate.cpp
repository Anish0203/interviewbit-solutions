// find out the farthest 1 at every B distance

int Solution::solve(vector<int> &A, int B) {
    int n=A.size(),i,ans=0;
    for(i=0;i<n;i++)
    {
        int j;
        if(i!=0)
        j=min(n-1,i+(2*B)-2);
        else
        j=min(n-1,i+B-1);
        bool found=false;
        while(j>=i)
        {
            if(A[j]==1)
            {
                ans++;
                found=true;
                break;
            }
            j--;
        }
        if(!found)
        return -1;
        if(j+B-1>=n-1)
        return ans;
        i=j;
    }
    return -1;
}
