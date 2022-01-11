#include <bits/stdc++.h>
using namespace std;

int pivotIndex(vector<int>& nums) {
    
        int n=nums.size(),sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
        }
        int l_sum=0;
        for(int i=0;i<n;i++)
        {
            if(l_sum==(sum-nums[i]))
                return i;
            l_sum+=nums[i];
            sum-=nums[i];
        }
        return -1;
    }

int main()
{
//    cout<<"Hello World";
vector<int>v={1,7,3,6,5,6};
int res=pivotIndex(v);
cout<<res;

    return 0;
}
