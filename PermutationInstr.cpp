/*
Given two strings s1 and s2, return true if s2 contains a permutation of s1, or false otherwise.

In other words, return true if one of s1's permutations is the substring of s2.
Example 1:

Input: s1 = "ab", s2 = "eidbaooo"
Output: true
Explanation: s2 contains one permutation of s1 ("ba").
Example 2:

Input: s1 = "ab", s2 = "eidboaoo"
Output: false
*/


#include <bits/stdc++.h>
using namespace std;

class Solution {

public:
bool checkInclusion(string s1, string s2) {
        vector<int>permutePat(26);
        vector<int>searchInS2(26);
        int n=s1.size();
        for(auto it:s1)
            permutePat[it-'a']++;
        for(int i=0;i<s2.size();i++)
        {
            searchInS2[s2[i]-'a']++;
            if(i>=n)
                searchInS2[s2[i-n]-'a']--;
            if(permutePat==searchInS2)
                return true;
        }
        return false;
    }
};

int main()
{
   // cout<<"Hello World";
   Solution s;
   string s1="ab",s2="eidbaooo";
    cout<<s.checkInclusion(s1,s2);
    return 0;
}
