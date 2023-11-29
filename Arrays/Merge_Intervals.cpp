/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInt) {
    int n=intervals.size(),i=0;
    vector<Interval>ans;
    while(i<n && intervals[i].end<newInt.start)
    {
        ans.push_back(intervals[i]);
        i++;
    }
    if(i==n)
    {
        ans.push_back(newInt);
        return ans;
    }
    if(intervals[i].start>newInt.end)
    {
        ans.push_back(newInt);
        while(i<n)
            ans.push_back(intervals[i++]);
        return ans;
    }
    Interval temp;
    temp.start=min(intervals[i].start,newInt.start);
    temp.end=max(intervals[i].end,newInt.end);
    while(i<n && intervals[i].start<=temp.end)
    {
        temp.end=max(temp.end,intervals[i].end);
        i++;
    }
    ans.push_back(temp);
    while(i<n)
        ans.push_back(intervals[i++]);
    return ans;
    
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
