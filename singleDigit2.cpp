/*
Given an integer array nums where every element appears three times except for one, which appears exactly once. Find the single element and return it.
You must implement a solution with a linear runtime complexity and use only constant extra space.

Example 1:
Input: nums = [2,2,3,2]
Output: 3

Example 2:
Input: nums = [0,1,0,1,0,1,99]
Output: 99
*/


//O(n^2) solution
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        for ( int i = 0; i < nums.size(); i++) 
        {
            int flag=0;
            for ( int j = 0; j < nums.size(); j++)
                if ( nums[i] == nums[j] && i != j)
                    flag=1;
                    
            if (flag==0) 
                return nums[i];
        }
        return -1;
    }
};

int main()
{
    //cout<<"Hello World";
    Solution s;
    vector<int>v={2,2,7,2};
    cout<<s.singleNumber(v);
    return 0;
}


// Optimal O(n) solution
/* Code Explanation:

ones - it will store the elements that appear once
twos - it will be storing the elements that are repeating twice
Now a dry run using the example: nums=[2,2,2,3]
here we have taken ones and twos initial values to be 0
now ones = (00^10)&(11) = 10 & 11 = 10 = 2 ( you can see that since 2 has appeared only once it is stored in ones)
twos = (00^10)&(01) = 10 & 01 = 00 = 0

ones = (10^10)&(11) = 00 & 11 = 00 = 0
twos = (00^10)&(11) = 10 & 11 = 10 = 2 ( you can see that since 2 has appeared twice so it is stored in twos now)

ones = (00^10)&(01) = 10 & 01 = 00 = 0
twos = (10^10)&(11) = 00 & 11 = 00 = 0

ones = (00^11)&(11) = 11 & 11 = 11 = 3
twos = (00^11)&(00) = 11 & 00 = 00 = 0

so now ones will be returned which is 3. So 3 here is the non-repeating element in the given array.
(Remember: There is no variable that stores the value of any element which occurs thrice.)

Time Complexity - O(n)
Space Complexity - O(1)
*/


class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {       
        int ones = 0;
        int twos = 0;
        
        for ( int i : nums ) {
            int a=(~twos);
            int b=(~ones);
            ones = (ones ^ i) & (~twos);
            twos = (twos ^ i) & (~ones);
        }
        return ones;
    }
};