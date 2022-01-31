#include <bits/stdc++.h>
using namespace std;

int longestPalindrome(string s) 
{
        int len=1;
        unordered_map<char,int>mp;
        for(auto c:s)
        {
            mp[c]++;
        }
        for(auto x:mp)
        {
            if(x.second>=2)
            {
                if(x.second%2==0)
                    len+=x.second;
                else 
                    len+=x.second-1;
            }
        }
        if(len>s.size())
            return len-1;
        return len;
}

int main()
{
   // cout<<"Hello World";
    string s = "ccccdd";
    cout<<longestPalindrome(s);
    return 0;
}

