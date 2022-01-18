#include <bits/stdc++.h>
using namespace std;

void powerSet(string s)
{
	int n=s.length();
	int powsize=pow(2,n);
	for(int cnt=0;cnt<powsize;cnt++)
	{
		for(int i=0;i<n;i++)
		{
			if((cnt&(1<<i))!=0)
			{	
				char c=s[i];
				cout<<s[i];
			}
		}
		cout<<"\n";
	}
}
int main()
{
//Code here...
    string s;cin>>s;
    powerSet(s);
    return 0;
}

