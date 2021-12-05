#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    void expand(string s,int left,int right, stack<string>&stack1)
    {
        while(left>=0 && right<s.size() && s[left]==s[right])
        {
            stack1.push(s.substr(left,right-left+1)); 
        // for eg: in=cdababae || palindrome= ababa || s.substr(2 to 6-2+1) i.e 2 then following 5 letters

            left--;right++;
        }
    }
    
    int countSubstrings(string s) 
    {
        stack<string>stack1;
        for(int i=0;i<s.size();i++)
        {
            expand(s,i,i,stack1);//This is for odd palindromes

            expand(s,i,i+1,stack1);//This is for even palindromes
        }
        return stack1.size();

    }
};