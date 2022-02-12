#include <bits/stdc++.h>
using namespace std;

int longestPalindromeWithoutRepeatChar(string s)
{
	int n=s.length();
	vector<int>v(256,-1);
	int i=0,res=0;
	for(int j=0;j<n;j++)
	{
		i=max(i,v[s[j]]+1);
		int maxEnd=(j-i+1);
		res=max(res,maxEnd);
		v[s[j]]=j;
	}
	return res;
}

int main()
{
    //cout<<"Hello World";
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    string s="adbca";
    cout<<longestPalindromeWithoutRepeatChar(s);
    return 0;
}