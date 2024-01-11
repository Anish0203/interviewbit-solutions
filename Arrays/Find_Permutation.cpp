vector<int> Solution::findPerm(const string A, int B) {
    vector<int>ans;
    int n=B,i;
    if(n==1)
    {
        ans.push_back(1);
        return ans;
    }
    int maxi=n,mini=1;
    if(A[0]=='D')
    {
        ans.push_back(n);
        maxi--;
    }
    else
    {
        ans.push_back(1);
        mini++;
    }
    for(i=0;i<A.length();i++)
    {
        if(A[i]=='D')
        {
            if((i+1)<A.length() && A[i+1]=='I')
            {
                ans.push_back(mini);
                mini++;
            }
            else
            {
                ans.push_back(maxi);
                maxi--;
            }
        }
        else
        {
            if((i+1)<A.length() && A[i+1]=='D')
            {
                ans.push_back(maxi);
                maxi--;
            }
            else
            {
                ans.push_back(mini);
                mini++;
            }
        }
    }
    return ans;
}


/*
IIDDIII
1 2 8 7 3 4 5 6

DDDIDDIII
10 9 8 1 7 6 2 3 4 5

DIIDD
6 1 2 5 4 3
*/




/*
vector<int> Solution::findPerm(const string A, int n) {

    vector<int>ans(n);

    for(int i=0;i<n;i++) ans[i]=i+1;

    int j=0;

    while(j<A.size()){

        if(A[j]==‘D’){

            int temp=j;

            while(temp<n && A[temp]==‘D’){

                temp++;

            }

            reverse(ans.begin()+j,ans.begin()+temp+1);

            j=temp;

        } else{

        j++; }

        

    }

    return ans;

}


*/
