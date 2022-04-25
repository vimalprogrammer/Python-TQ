#include <bits/stdc++.h>
using namespace std;

int main()
{
   // cout<<"Hello World";
    string s="ccaabrqo";
    int len=s.size();
    int a[26]={0};
    
    for(int i=0;i<len;i++)
        a[s[i]-'a']++;
    string t="";
    
    for(int i=0;i<26;i++)
        t+=string(a[i],i+'a');
    cout<<t;
    return 0;
}
