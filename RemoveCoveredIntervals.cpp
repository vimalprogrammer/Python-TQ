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


/*
1. Easy C++
2. Line by Line Explanation with Comments.
3. Detailed Explanation ✅
4. Approach using simple sorting & comparison with previous element
5. Please Upvote if it helps⬆️
6. Link to my Github Profile contains a repository of Leetcode with all my Solutions. ⬇️
	// 😉If you Like the repository don't foget to star the repository😉 
LeetCode

EXPLANATION

1.The interval [a, b) is covered by the interval [c, d) if and only if c <= a and b <= d.
	eg Interval [3,6] is covered by [2,8], therefore it should be removed.
	
	Let see the Number line :)
	
	                                           1  2  3  4  5  6  7  8
											   1-------4
											         3--------6
												  2-----------------8
	clearly we can see that [3 6] is covered by [2,8] and therefore it should be removed.

2. We will Sort the vector in ascending order to get this type of arrangement.
		//e.g. (1,5), (1,8), (2,9), (3,5), (4,7), (4,9)
		
3. For finding the remaining interaval, ifa[1][0] && a[1][1] both greater than a[0][0] && a[0][1],
this means the previous interval is not covered by the next one, therefore we will increase the count.
			consider the case [[1,3],[2,4],[4,8]]
								1   2  3  4  5  6  7  8
								1------3
									2-----4
									      4-----------8
											 
			No interval is completely overlaped by other therefore remainig interaval are 3.
			
			how answer is 3 , at first cnt is initialised to 1
			now a[0,0] i.e 1 and a[1,0] i.e 2   1 < 2 also,
			    a[0,1] i.e 3 and a[1,1] i.e 4   3 < 4    , therefore cnt is incremented by 2 now,
					
					also a[2,0] and a[2,1] satisy same condition with a[1,0] and a[1,1] , cnt becomes 3
Time Complexity: O(n logn)
Space Complexity: O(1)
*/