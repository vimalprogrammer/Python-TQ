#include <bits/stdc++.h>
using namespace std;

//similar to 2sum in leetcode
//Two pointers approach
//Time complexity: O(n)
//Space complexity: O(1)

bool findPair(vector<int>v,int target)
{
	int n=v.size();
	int l=0,r=n-1;
	while(l<r)
	{
		if((v[l]+v[r])==target)
			return true;
		if((v[l]+v[r])>target)
			r--;
		else
			l++;	
	}
	return false;
}


int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

//Code here...
    vector<int>v={2,4,8,9,11,12,20,30};
    int target=23;
    bool res=findPair(v,target);
    cout<<res;
    return 0;
}

