/*
Given an integer array nums that may contain duplicates, return all possible subsets (the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.

Example 1:
Input: nums = [1,2,2]
Output: [[],[1],[1,2],[1,2,2],[2],[2,2]]

Example 2:
Input: nums = [0]
Output: [[],[0]]
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int n=nums.size();
	int powsize=pow(2,n);
	int cnt1=0;
    vector<int>v;
    set<vector<int>>v2;
	for(int cnt=0;cnt<powsize;cnt++)
	{
		for(int i=0;i<n;i++)
		{
			if((cnt&(1<<i))!=0)
			{	
				v.push_back(nums[i]);
			}
		}
        v2.insert(v);
        v.clear();
	}
    vector<vector<int>>vec{v2.begin(),v2.end()};
    return vec;    
    }
};