/*
You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

Example 1:
Input: n = 2
Output: 2
Explanation: There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps

Example 2:
Input: n = 3
Output: 3
Explanation: There are three ways to climb to the top.
1. 1 step + 1 step + 1 step
2. 1 step + 2 steps
3. 2 steps + 1 step
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

int climbStairs(int n) {
    // base cases
        int t[n+1];
        for(int i=0;i<=n;i++) t[i]=0;
        t[1]=1;
        if(n>=2) 
            t[2]=2;
        for(int i=3;i<=n;i++){
             t[i] = t[i-1]+t[i-2];    
        }
        return t[n];
    }
};

int main()
{
    //cout<<"Hello World";
    Solution s;
    cout<<s.climbStairs(5);
    return 0;
}
