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

//-----------------ACCEPTED MEMOIZATION SOLUTION-----------------//

class Solution {
public:
    int longestCommonSubsequence(string &s1,string &s2,int n1,int n2,int memo[1001][1001])
    {
        if(n1==0 || n2==0)
            return 0;
        if(memo[n1][n2]!=-1)
            return memo[n1][n2];
        if(s1[n1-1]==s2[n2-1])
            return memo[n1][n2]=1+longestCommonSubsequence(s1,s2,n1-1,n2-1,memo);
        else
            return memo[n1][n2]=max(longestCommonSubsequence(s1,s2,n1-1,n2,memo),longestCommonSubsequence(s1,s2,n1,n2-1,memo));
    }
    
    int longestCommonSubsequence(string text1, string text2) {
     
        int n1=text1.size();
        int n2=text2.size();
        int memo[1001][1001];
        for(int i=0;i<1001;i++)
            for(int j=0;j<1001;j++)
                memo[i][j]=-1;
        
        return longestCommonSubsequence(text1,text2,n1,n2,memo);
    }
};

//-----TABULATION SOLUTION-----//
//EFFICIENT SOLUTION - Bottom Up Approach

class Solution {
public:
   
    int longestCommonSubsequence(string text1, string text2) {
        int m=text1.size(),n=text2.size();
        int dp[m+1][n+1];
        for(int i=0;i<m+1;i++){
            dp[i][0]=0;
        }
        for(int i=0;i<n+1;i++){
            dp[0][i]=0;
        }
        for(int i=1;i<m+1;i++){
            for(int j=1;j<n+1;j++){
               if(text1[i-1]==text2[j-1]){
                  dp[i][j]= 1+dp[i-1][j-1];
               }else{
                   dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
               } 
            }
        }
        return dp[m][n];
    }
};