// C++ code all Subsequences of string
// string in iterative manner

//TC - O(n^3) since we are using nested for loops
#include <bits/stdc++.h>
using namespace std;

void stringCombinations(string s) {
   int n=s.length();
   for(int i=0;i<n;i++)
   {
       for(int j=i;j<n;j++)
       {
           for(int k=i;k<=j;k++)
           {
               cout<<s[k];
           }
           cout<<"\n";
       }
   }

}
int main()
{
	string s = "abc";
	stringCombinations(s);	
	return 0;
}
