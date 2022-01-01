#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        int n= nums.size();
        
        for(int i=0; i<n; i++){
            if (mp.find(target-nums[i]) != mp.end()) //if(mp.count(target-nums[i]))
                return {mp[target-nums[i]],i};
            
            mp[nums[i]]=i;
        }
        return {};
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

//Code here...
vector<int>v={2,7,11,15};
int target=17;
vector<int>res=twoSum(v,target);
for(auto i:res)
{
	cout<<i<<" ";
}

    return 0;
}

