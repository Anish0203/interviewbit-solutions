/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
 bool comp(Interval &a,Interval &b)
 {
     return a.start<b.start;
 }
vector<Interval> Solution::merge(vector<Interval> &A) {
    sort(A.begin(),A.end(),comp);
    vector<Interval>ans;
    int n=A.size(),i;
    int start=A[0].start,end=A[0].end;
    for(i=1;i<n;i++)
    {
        if(A[i].start>end)
        {
            Interval temp;
            temp.start=start;
            temp.end=end;
            ans.push_back(temp);
            start=A[i].start;
            end=A[i].end;
        }
        end=max(end,A[i].end);
    }
    Interval temp;
    temp.start=start;
    temp.end=end;
    ans.push_back(temp);
    return ans;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
