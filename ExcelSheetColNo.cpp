/*
Given a string columnTitle that represents the column title as appear in an Excel sheet, return its corresponding column number.

For example:
A -> 1
B -> 2
C -> 3
...
Z -> 26
AA -> 27
AB -> 28 
...
 

Example 1:
Input: columnTitle = "A"
Output: 1

Example 2:
Input: columnTitle = "AB"
Output: 28

Example 3:
Input: columnTitle = "ZY"
Output: 701
*/

#include <bits/stdc++.h>
using namespace std;

int titleToNumber(string colNumber)
{
    int res=0;
    for(auto it:colNumber)
    {
        int t=it-'A'+1;
        res=res*26+t;//BCA B=2*26*26 A=1*26 A=1 ==>89
    }
    return res;
}

int main()
{
   // cout<<"Hello World";
    cout<<titleToNumber("BAA");
    return 0;
}
