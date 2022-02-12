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


// O(n^2) Solution using substr() function

// C++ code all Subsequences of a
// string in iterative manner
#include <bits/stdc++.h>
using namespace std;

vector<string> Substrings(string s) {
   int n=s.length();
   vector<string>v;
   for(int i=0;i<n;i++)
   {
       for(int j=1;j<=n-i;j++)
           v.push_back(s.substr(i,j));// second parameter of substr() is the len of the particular substring
   }
    
    return v;
}
int main()
{
	string s = "abc";
	vector<string>res = Substrings(s);
	for(auto it:res)
	    cout<<it<<" ";
	return 0;
}
