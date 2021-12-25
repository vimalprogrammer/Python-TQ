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
    	int a[n];
    	for(int i=0;i<n;i++)
    		cin>>a[i];
    	int res=-1,largest=0;
    	for(int i=1;i<n;i++)
    	{
    		if(a[i]>a[largest])
    		{
    			res=largest;
    			largest=i;
    		}

    		else if(a[i]!=a[largest])
    		{
    			if(res==-1 || a[i]>a[res])
    				res=i;
    		}
    	}
    	cout<<a[res]<<"\n";
    }

    return 0;
}

