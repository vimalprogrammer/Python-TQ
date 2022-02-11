/*
Given two strings s and goal, return true if and only if s can become goal after some number of shifts on s.

A shift on s consists of moving the leftmost character of s to the rightmost position.

For example, if s = "abcde", then it will be "bcdea" after one shift.
 

Example 1:

Input: s = "abcde", goal = "cdeab"
Output: true
Example 2:

Input: s = "abcde", goal = "abced"
Output: false

*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool rotateString(string s, string goal) {
    int n1=s.size(),n2=goal.size();
    if(n1!=n2)
        return false;
    return (s+s).find(goal)!=-1;
    }
};