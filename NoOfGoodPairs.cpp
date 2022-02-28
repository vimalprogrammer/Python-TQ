/*
Given an array of integers nums, return the number of good pairs.

A pair (i, j) is called good if nums[i] == nums[j] and i < j.

Example 1:

Input: nums = [1,2,3,1,1,3]
Output: 4
Explanation: There are 4 good pairs (0,3), (0,4), (3,4), (2,5) 0-indexed.

Example 2:

Input: nums = [1,1,1,1]
Output: 6
Explanation: Each pair in the array are good.

Example 3:

Input: nums = [1,2,3]
Output: 0
*/


#include<bits/stdc++.h>
using namespace std;

//Naive solution
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
    int n=nums.size();
    int cnt=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(nums[i]==nums[j])
                cnt++;
        }
    }
    return cnt;
    }
};


//Optimized solution with extra space
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
    int n=nums.size();
    int sum=0;
    int mem[1000]={0};
    for(int i=0;i<n;i++)
    {
        sum+=mem[nums[i]];
        ++mem[nums[i]];
    }
    return sum;
    }
};