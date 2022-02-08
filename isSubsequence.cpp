/*
Given two strings s and t, return true if s is a subsequence of t, or false otherwise.
Example 1:

Input: s = "abc", t = "ahbgdc"
Output: true
Example 2:

Input: s = "axc", t = "ahbgdc"
Output: false
*/

class Solution {
public:
bool isSubsequence(string s, string t) 
{
        int n1=s.length();
        int n2=t.length();
        int i=0,j=0;
        while(n2--)
        {
             if(t[i]==s[j])
             {
                 i++;j++;
                 if(j==n1)
                    return true;
             }
            else
                i++;
        }
        if(j==n1)
            return true;
        return false;
}
};


// clean code
/*
bool isSubsequence(string s, string t) 
{
        int n1=s.length();
        int n2=t.length();
        int j=0;
        for(int i=0;j<n1 && i<n2;i++)
        {
             if(t[i]==s[j])
                j++;
        }
        if(j==n1)
            return true;
        return false;
}
*/

//RECURSIVE APPROACH
#include <bits/stdc++.h>
using namespace std;

bool issubsq(string s,string t,int n,int m)
{
    if(n==0)
        return true;
    if(m==0)
        return false;
    if(s[n-1]==t[m-1])
        return issubsq(s,t,n-1,m-1);
    else
        return issubsq(s,t,n,m-1);
}

bool isSubsequence(string s, string t) 
{
    int n=s.length();
    int m=t.length();
    bool res=issubsq(s,t,n,m);
    return res;
}

int main()
{
    //cout<<"Hello World";
    string s="abc",t="ahbjcj";
    cout<<isSubsequence(s,t);
    return 0;
}
