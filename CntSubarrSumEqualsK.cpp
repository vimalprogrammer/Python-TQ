#include <bits/stdc++.h>
using namespace std;

//Idea is to find if the current sum is equal to k , if it is we increment ans.
//If we are able to find curr - k in our map we add the frequency of (curr- k) to ans, which means we having those many subarrays which sum equal to k.

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
    
        unordered_map<int,int>mp;
        mp[0]++;
        int cur_sum=0;
        int ans=0;
        for(auto it:nums)
        {
            cur_sum+=it;
            ans+=mp[cur_sum-k];
            mp[cur_sum]++;
        }
        return ans;
    }
};