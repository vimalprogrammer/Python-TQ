#include <bits/stdc++.h>
using namespace std;

int maxSeqence(vector<int>nums)
{
    {
        unordered_map<int, int> mp;//0,1,0,1,1,0,1,1,1,0
        int sum=0, ans=0;
        for(int i=0; i<nums.size(); i++) 
        {
            sum += nums[i]==0 ? -1 : 1;
            if(sum == 0)
                ans = i+1;
            if(mp.find(sum) != mp.end()) 
                ans = max(ans, i-mp[sum]);
            else 
                mp[sum] = i;
        }
        return ans;
    }
}

int main()
{
    vector<int>v={0,0,0,0,0,1,1,0,1,0};//OP->6
    cout<<maxSeqence(v);
    //cout<<"Hello World";
    return 0;
}
