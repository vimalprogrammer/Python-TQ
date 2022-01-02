// Maximum consecutive Set bits

#include <bits/stdc++.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

//Code here...
    int n;cin>>n;
    vector<int>v;

    for(int i=0;i<n;i++)
    {
    	int a;cin>>a;
    	v.emplace_back(a);
    }
    int cnt=0,res=0;
    for(int i=0;i<n;i++)
    {
    	if(v[i]==1)
    	{
    		cnt++;
    		res=max(res,cnt);
    	}
    	else
    		cnt=0;
    }
    cout<<res;


    return 0;
}

