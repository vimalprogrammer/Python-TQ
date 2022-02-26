/*
Explanation:
Input: vimal
Output: vimal where v is the greatest alphabet;
//keep track of rotations and print the final string in the map

Input: arun
Output: unar where u is the greatest alphabet;

Input: shrivishnu
Output: vishnushri where v is the greatest alphabet;
*/


#include<bits/stdc++.h>
using namespace std;

int main() 
{
    string str;
    int len,i=0,j=0,k=0;
    char temp;
    cin>>str;
    len = str.length();
    map<string,int>m;
    while(i<len)
    {
        temp = str[0];
        while(j<len-1)
        {
            str[j] = str[j+1];
            j++;
        }
        str[j] = temp;
        m[str]=k++;
        i++;
        j=0;
    }
    str = m.rbegin()->first;
    cout<<str;
    return 0;
}
