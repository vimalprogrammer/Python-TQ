/*
Given a number 'n'. Reverse it and add the reverse number to 
the original number, if the sum is not a pallindrome then repeat 
the process until the number becomes a pallindrome.
*/

/*
Input: 7325
Output: 497794
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>   
#include <bits/stdc++.h>
using namespace std;

bool ispalindrome(int n)
{
  string e=to_string(n);
  string s=e;
  reverse(e.begin(),e.end());
  if(s==e)
    return true;
  return false;
}

void solve(int n)
{
  while(true)
  {
    if(ispalindrome(n))
    {
      cout<<n;
      return ;
    }
    string s=to_string(n);
    reverse(s.begin(),s.end());
    int t=stoi(s);
    n+=t;
  }
}

int main() {                             
/* Enter your code here. Read input from STDIN. Print output to STDOUT */
int n;cin>>n;
solve(n);
return 0;
}
