#include <iostream>
using namespace std;

int main()
{
    string s="vimal";
    int a[26]={0};
    for(int i=0;i<s.length();i++)
        a[s[i]-'a']++;//gives 21 --> v's 21 value in a[26] starting from 0; 

    for(int i=0;i<26;i++)
        cout<<a[i]<<" ";
        
    //a[26]={1 0 0 0 0 0 0 0 1 0 0 1 1 0 0 0 0 0 0 0 0 1 0 0 0 0}
    return 0;
}
