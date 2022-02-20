/*
Given an array intervals where intervals[i] = [li, ri] represent the interval [li, ri), remove all intervals that are covered by another interval in the list.
The interval [a, b) is covered by the interval [c, d) if and only if c <= a and b <= d.
Return the number of remaining intervals.

Example 1:
Input: intervals = [[1,4],[3,6],[2,8]]
Output: 2
Explanation: Interval [3,6] is covered by [2,8], therefore it is removed.

Example 2:
Input: intervals = [[1,4],[2,3]]
Output: 1
*/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    int removeCoveredIntervals(vector<vector<int>>& v) {
    sort(v.begin(),v.end());
    int n=v.size();
    int x=v[0][0];
    int y=v[0][1];
    int res=1;
    for(int i=1;i<n;i++)
    {
        if(v[i][0]>x && v[i][1]>y)
            ++res;
        
        if(v[i][1]>y)
        {
            x=v[i][0];
            y=v[i][1];
        }
    }
    return res;   
    }
};