#include <bits/stdc++.h>
using namespace std;

int CntDuplicates(vector<int>& nums) 
{
        map<int,int>mp;
        int cnt=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        for(auto it:mp)
            if(it.second>=1)
                cnt++;
        return cnt;
}

int main()
{
    //cout<<"Hello World";
    
    vector<int>v={1,1,1,2,2,3,3,4,5,6,7,5};
    int res=CntDuplicates(v);
    cout<<res;
    return 0;
}
