/*
Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).
Return the running sum of nums.

Example 1:

Input: nums = [1,2,3,4]
Output: [1,3,6,10]
Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].

Example 2:

Input: nums = [1,1,1,1,1]
Output: [1,2,3,4,5]
Explanation: Running sum is obtained as follows: [1, 1+1, 1+1+1, 1+1+1+1, 1+1+1+1+1].

Example 3:

Input: nums = [3,1,2,10,1]
Output: [3,4,6,16,17]
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>v;
        for(int i=0;i<nums.size();i++)
        {
            int sum=0;
            int t=i+1;
            for(int j=0;j<=i;j++)
            {
                sum+=nums[j];
            }
            v.push_back(sum);
        }
        return v;
    }
};


/*
vector<int> runningSum(vector<int>& nums) {
        int i = 1;
        while (i<nums.size()){
            nums[i]+=nums[i-1];
            i++;
        }
        return nums;
    }
*/