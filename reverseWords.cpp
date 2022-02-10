#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s) 
{
    int n=s.length();
    int startRevPoint=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]==' ')
        {
            reverse(s.begin()+startRevPoint,s.begin()+(i));
            startRevPoint=i+1;
        }
    }
    reverse(s.begin()+startRevPoint,s.end());
    reverse(s.begin(),s.end());
    return s;
}

int main()
{
//    cout<<"Hello World";
    string s="Let's take LeetCode contest";
    cout<<reverseWords(s);
    return 0;
}
