#include <bits/stdc++.h>
using namespace std;

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