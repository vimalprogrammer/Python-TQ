
#include <bits/stdc++.h>
using namespace std;

int circularBinSearch(vector<int>v,int t)
{
	int n=v.size();
	int l=0,h=n-1;
	while(l<=h)
	{
		int mid=(l+h)/2;
		if(v[mid]==t)
			return mid;
		if(v[mid]>=v[l])
		{
			if(t>=v[l] && t<v[mid])
				h=mid-1;
			else
				l=mid+1;
		}
		else
		{
			if(t>v[mid] && t<=v[h])
				l=mid+1;
			else
				h=mid-1;
		}
	}
	return -1;
}


int main()
{
//Code here...
	vector<int>v={3,1};
	int target=3;
	cout<<circularBinSearch(v,target);    
    return 0;
}