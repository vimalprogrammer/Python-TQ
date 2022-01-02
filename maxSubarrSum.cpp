#include <bits/stdc++.h>
using namespace std;

// int maxSubarr(vector<int>v)
// {
// 	int n=v.size();
// 	int maxEnding=0,res=v[0];
// 	for(int i=1;i<n;i++)
// 	{
// 		maxEnding=max(maxEnding+v[i],v[i]);
// 		res=max(maxEnding,res);
// 	}
// 	return res;
// }

//-----------------------------------------------//

//Kadane's algo
int maxSubarr(vector<int>v)
{
	int n=v.size(),cnt=0,res=0;
	for(int i=0;i<n;i++)
	{
		cnt=cnt+v[i];
		if(cnt<0) cnt=0;
		res=max(res,cnt);
	}
	return res;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

//Code here...
    vector<int>v={-3,8,-2,4,-5,6};
    int res=maxSubarr(v);
    cout<<res;
    return 0;
}

