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

// DRY RUN OF THE CODE

// Input: abcabcd
// Output: 4
// Explanation: The answer is "abcd", with the length of 4.


//LOGIC:
// 1. We will use a vector of size 256 to store the last index of each character.
// 2. We will use a variable i to keep track of the start of the current substring.
// 3. We will use a variable res to keep track of the maximum length of the substring.
// 4. We will use a variable j to iterate through the string.
// 5. We will use a variable maxEnd to keep track of the length of the current substring.

		// i=max(i,v[s[j]]+1);
		// int maxEnd=(j-i+1);
		// res=max(res,maxEnd);
		// v[s[j]]=j;
/*
 //(0,-1+-1)=0  (0,-1+-1)=0   0,(-1+1)=0    0,0+1=1   1,(1+1)=2    2,2+1=3  3,-1+1=3
 //0-0+1=1      (1-0+1)=2     2-0+1=3       3-1+1=3    4-2+1=3     5-3+1=3  6-3+1=4
 //(0,1)=1      (1,2)=2       (2,3)=3       (3,3)=3     (3,3)=3    (3,3)=3  (3,4)=4
 //a=0          b=1            c=2          a=3         b=4         c=5     d=6
 */