
#include <bits/stdc++.h>
using namespace std;

    int majorityElement(vector<int>& nums) {
    
    //Moore's Voting Algorithm
    int n=nums.size();
    int cnt=1,res=nums[0];
    for(int i=1;i<n;i++)
    {
        if(res==nums[i])
            cnt++;
        else
            cnt--;
        if(cnt==0)
        {
            res=nums[i];
            cnt=1;
        }
    }
    cnt=0;   
    for(int i=0;i<n;i++)
    {
        if(res==nums[i])
            cnt++;
    }
    int m=n/2;
    if(cnt>=n/2)
        return res;
    }


int main()
{
    //cout<<"Hello World";
    vector<int>v={3,5,3};
    int res=majorityElement(v);
    cout<<res;
    return 0;
}
