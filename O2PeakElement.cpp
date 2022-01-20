
#include <bits/stdc++.h>
using namespace std;

int findPeakElement(vector<int>& v) {
//A peak element is an element that is strictly greater than its neighbors.
//Peak element = a[i-1]<a[i]>a[i+1]
//Binary search approach even though the array is not sorted;
//There is always exactlt one solution
	int n=v.size();
	int l=0,h=n-1;
	while(l<=h)
	{
		int mid=(l+h)/2;
		if((mid==0 || v[mid-1]<=v[mid]) && (mid==n-1 || v[mid+1]<=v[mid]))
		{
			//checking first element or last element is peak
			return mid;
		}
		if(mid>0 && v[mid-1]>=v[mid])
			h=mid-1;
		else
			l=mid+1;
	}
	return -1;
}


int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

//Code here...
	vector<int>v={5,20,25,30,60,50};
	cout<<findPeakElement(v);
    return 0;
}