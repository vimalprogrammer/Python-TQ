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