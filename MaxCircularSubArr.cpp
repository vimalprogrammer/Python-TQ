#include<bits/stdc++.h>
using namespace std;

// class Solution {
// public:

// int MaxNomalSubarrSum(vector<int>v)
// {
//     int n=v.size();
//     int curSum=v[0];
//     int maxSum=v[0];
//     for(int j=1;j<n;j++)
//     {
//         curSum+=v[j];
//         curSum=max(curSum,v[j]);
//         maxSum=max(maxSum,curSum);
//     }
//     return maxSum;
// }
    
// int maxSubarraySumCircular(vector<int>& nums)
// {
//     vector<int>v=nums;
//     int NormalSubArrres=MaxNomalSubarrSum(v);
//     int n=v.size();
//     if(NormalSubArrres<0)
//         return NormalSubArrres;
//     int sum=0;
//     for(int i=0;i<n;i++)
//     {
//         sum+=v[i];
//         v[i]=-v[i];//Inverting vector to pass into kadane's algo to get minimum subarr
//     }
//     int CirSubArrRes=MaxNomalSubarrSum(v);
//     sum=sum+CirSubArrRes;
//     return max(sum,NormalSubArrres);
// }
// };

//----------------------------------------------//
//Further Optimizing the code

class Solution {
public:
    
    int maxSubarraySumCircular(vector<int>& nums) 
    {
        int total = 0, minSum = nums[0], maxSum = nums[0], curMax = 0, curMin = 0;
        for(auto &e : nums){
            total += e;
            
            curMax = max(e, curMax+e);
            maxSum = max(maxSum, curMax);
            
            curMin = min(e, curMin+e);
            minSum = min(minSum, curMin);
        }
        
        return maxSum < 0 ? maxSum : max(maxSum, total-minSum);
    }
};
   