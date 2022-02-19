/*
Given a string s, find the length of the longest substring without repeating characters. 

Example 1:

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.

Example 2:

Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.

Example 3:

Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
*/


#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubStrWithoutRepeatChar(string s)
{
	int n=s.length();
	vector<int>v(256,-1);
	int i=0,res=0;
	for(int j=0;j<n;j++)
	{
		i=max(i,v[s[j]]+1);
		int maxEnd=(j-i+1);
		res=max(res,maxEnd);
		v[s[j]]=j;
	}
	return res;
}

int main()
{
    //cout<<"Hello World";
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    string s="adbca";
    cout<<lengthOfLongestSubStrWithoutRepeatChar(s);
    return 0;
}