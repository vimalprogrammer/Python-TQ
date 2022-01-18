#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> subsets(vector<int>& nums) 
{
    int n=nums.size();
	int powsize=pow(2,n);
	int cnt1=0;
    vector<int>v;
    vector<vector<int>>v2;
	for(int cnt=0;cnt<powsize;cnt++)
	{
		for(int i=0;i<n;i++)
		{
			if((cnt&(1<<i))!=0)
			{	
				v.push_back(nums[i]);
			}
		}
        v2.push_back(v);
        v.clear();
	}
    return v2;
}
    
int main()
{
//Code here...
    vector<int>v={1,2,3};
    vector<vector<int>>s=subsets(v);
    for(auto it:s)
    {
        for(auto i:it)
            cout<<i<<" ";
        cout<<"\n";
    }
    return 0;
}

