/*
Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.

Example 1:

Input: s = "leetcode"
Output: 0
Example 2:

Input: s = "loveleetcode"
Output: 2

*/

class Solution {
public:
    int firstUniqChar(string s) {
    int charr[256]={0};
    int n=s.length();
    for(int i=0;i<n;i++)
        charr[s[i]]++;
    for(int i=0;i<n;i++)
    {
        if(charr[s[i]]==1)
            return i;
    }
    
    return -1;
    }
};