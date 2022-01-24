//imagine the linked list cycle method

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    int slow=nums[0];
    int fast=nums[0];
    do
    {
        slow=nums[slow];
        fast=nums[nums[fast]];
    }while(slow!=fast);
    fast=nums[0];
    while(slow!=fast)
    {
        slow=nums[slow];
        fast=nums[fast];
    }
    return slow;
    }
};


//With auxillary space 
/*
#include <bits/stdc++.h>
using namespace std;

int main()
{

//Code here...
    vector<int>v={5,7,0,1,3,2,4,1};
    int n=v.size();
    vector<int>temp(n);
    for(int i=0;i<n;i++)
    {
    	temp[v[i]]++;
    	if(temp[v[i]]>1)
    	{
    		cout<<v[i];
    		break;
    	}
    }

    return 0;
}
*/