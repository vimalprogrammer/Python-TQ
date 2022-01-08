#include <bits/stdc++.h>
using namespace std;

int main()
{
//Code here...
    int t;cin>>t;
    while(t--)
    {
	    string s;cin>>s;
	    int n=s.length();
	    if(n==1) //if len is 1 - no prime
	    {	
	    	cout<<"No\n";
	    	continue;
	    }
	    int cnt=0,pos=-1;
	    for(int i=0;i<n;i++)
	    {
	    	if(s[i]=='1')
	    	{
	    		cnt++;
	    		pos=i+1;
	    	}
	    }
	   	if(cnt==0 || (cnt==1 && pos==n)) //if no 1 or only one 1 at the end - No Prime
	   		cout<<"No\n";
	   	else
	   		cout<<"Yes\n";//else - Prime

	}
}