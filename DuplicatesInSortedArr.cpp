
#include <bits/stdc++.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

//Code here...
    int t;cin>>t;while(t--)
    {
    	int n;cin>>n;
    	if(n==0)
    		return 0;
    	int a[n];
    	for(int i=0;i<n;i++)
    		cin>>a[i];
    	int res=1;
    	for(int i=1;i<n;i++)
    	{
    		if(a[res-1]!=a[i])
    		{
    			a[res]=a[i];
    			//cout<<a[res]<<" ";
    			res++;
    		}
    	}
    	cout<<res<<"\n";
    }
    return 0;
}

