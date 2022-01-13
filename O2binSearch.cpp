#include <bits/stdc++.h>
using namespace std;


int binSearch(vector<int>& nums, int target) 
{
        int s=0,e=(nums.size())-1;
        while(s<=e)
        {
            int mid=(s+e)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]>target)
                e=mid-1;
            else
                s=mid+1;
        }
        return -1;
}
int main()
{
 //   cout<<"Hello World";
    vector<int>v={5};
    int t=5;
    int res=binSearch(v,t);
    cout<<res;
    return 0;
}
