/*
Given an integer array nums, you need to find one continuous subarray that if you only sort this subarray in ascending order, then the whole array will be sorted in ascending order.

Return the shortest such subarray and output its length.

Example 1:
Input: nums = [2,6,4,8,10,9,15]
Output: 5
Explanation: You need to sort [6, 4, 8, 10, 9] in ascending order to make the whole array sorted in ascending order.

Example 2:
Input: nums = [1,2,3,4]
Output: 0

Example 3:
Input: nums = [1]
Output: 0
*/

#define MAX_VAL INT_MAX

class Solution {
public:
int findUnsortedSubarray(vector<int>& nums)
{
    int n=nums.size();
    int start=-1,end=n;
    
    int curr_min=MAX_VAL;
    for(int i = n - 1; i>=0; i--) {
    	if(curr_min > nums[i]) 
    	    curr_min = nums[i];
    	if(nums[i] > curr_min) 
    	    start = i;
    }
    
    int cur_max = -MAX_VAL;
    for(int i=0; i<n; i++) {
    	if(cur_max < nums[i]) 
    	    cur_max = nums[i];
    	if(nums[i] < cur_max) 
    	    end = i;
    }
    
    if(start==-1){ 
    	return 0;
    }
    return end-start+1;
}
};