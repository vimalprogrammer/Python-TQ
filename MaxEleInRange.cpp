#include <bits/stdc++.h>
using namespace std;
/*
Let say,

L[] = {1, 2, 3} , R[] = {3, 5 , 7}

1. for this line arr[L[i]]++ the array becomes {0,1,1,1,0,0,0,0,……}

2. for this line arr[R[i+1]]– the array becomes  {0,1,1,1,-1, 0, -1, 0,-1,……}

3. when we do prefix sum the array becomes {0,1,2,3,2,2,1,1,0…}
*/

int MaxEleRange(vector<int>l,vector<int>r,int n)
{
	vector<int>v(1000);
	for(int i=0;i<n;i++)
	{
		v[l[i]]++;
		v[r[i]+1]--;
	}
	int maxe=v[0],res=0;
	for(int i=1;i<1000;i++)
	{
		v[i]+=v[i-1];
		if(maxe<v[i])
		{
			maxe=v[i];
			res=i;
		}
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
    int n;cin>>n;
	vector<int>l;
	vector<int>r;
	for(int i=0;i<n;i++)
	{
		int a;cin>>a;
		l.push_back(a);
	}
	for(int i=0;i<n;i++)
	{
		int a;cin>>a;
		r.push_back(a);
	}
	int res=MaxEleRange(l,r,n);
	cout<<res;
    return 0;
}