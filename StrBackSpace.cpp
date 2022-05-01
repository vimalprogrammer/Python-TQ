/*
Given two strings s and t, return true if they are equal when both are typed into empty text editors. '#' means a backspace character.
Note that after backspacing an empty text, the text will continue empty.

Example 1:
Input: s = "ab#c", t = "ad#c"
Output: true
Explanation: Both s and t become "ac".

Example 2:
Input: s = "ab##", t = "c#d#"
Output: true
Explanation: Both s and t become "".

Example 3:
Input: s = "a#c", t = "b"
Output: false
Explanation: s becomes "c" while t becomes "b".
*/

#include <bits/stdc++.h>
using namespace std;

bool backspaceCompare(string s, string t) {
    int sz=s.length();
    int tz=t.length();
    int k=0,x=0;
    for(int i=0;i<sz;i++)
    {
        if(s[i]=='#')
        {    
            k--;
            k=max(0,k);
        }
        else
        {
            s[k]=s[i];
            k++;
        }
    }
    
    for(int i=0;i<tz;i++)
    {
        if(t[i]=='#')
        {    
            x--;
            x=max(0,x);
        }
        else
        {
            t[x]=t[i];
            x++;
        }
    }
    if(k!=x)
        return false;
    
    for(int i=0;i<k;i++)
    {
        if(s[i]!=t[i])
            return false;
    }
    return true;
}

int main()
{
    //cout<<"Hello World";
    string s = "ab#c", t = "ad#c";
    cout<<backspaceCompare(s,t);
    return 0;
}
