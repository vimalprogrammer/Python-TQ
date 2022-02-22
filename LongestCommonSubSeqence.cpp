/*
Given two strings text1 and text2, return the length of their longest common subsequence. If there is no common subsequence, return 0.
A subsequence of a string is a new string generated from the original string with some characters (can be none) deleted without changing the relative order of the remaining characters.

For example, "ace" is a subsequence of "abcde".
A common subsequence of two strings is a subsequence that is common to both strings.

Example 1:
Input: text1 = "abcde", text2 = "ace" 
Output: 3  
Explanation: The longest common subsequence is "ace" and its length is 3.

Example 2:
Input: text1 = "abc", text2 = "abc"
Output: 3
Explanation: The longest common subsequence is "abc" and its length is 3.

Example 3:
Input: text1 = "abc", text2 = "def"
Output: 0
Explanation: There is no such common subsequence, so the result is 0.
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int helper(string s1,string s2,int n1,int n2,int memo[][1001])//Reason For TLE-We need 
    {                                                             //to pass strings in parameters as a reference - like &s1,&s2
        if(n1==0 || n2==0)
            return memo[n1][n2]=0;
        if(memo[n1][n2]!=-1)
            return memo[n1][n2];
        if(s1[n1-1]==s2[n2-1])
            return memo[n1][n2]=1+helper(s1,s2,n1-1,n2-1,memo);
        return memo[n1][n2]=max(helper(s1,s2,n1-1,n2,memo),helper(s1,s2,n1,n2-1,memo));
    }
    
    int longestCommonSubsequence(string text1, string text2) {
     
        int n1=text1.length();
        int n2=text2.length();
        int memo[1001][1001];
        for(int i=0;i<1001;i++)
            for(int j=0;j<1001;j++)
                memo[i][j]=-1;
        int res=helper(text1,text2,n1,n2,memo);
        return res;
    }
};

