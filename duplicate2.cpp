/*
Input: nums = [1,1,1,2,2,3]
Output: 5, nums = [1,1,2,2,3,_]
Explanation: Your function should return k = 5, with the first five elements of nums being 1, 1, 2, 2 and 3 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).

Input: nums = [0,0,1,1,1,1,2,3,3]
Output: 7, nums = [0,0,1,1,2,3,3,_,_]
Explanation: Your function should return k = 7, with the first seven elements of nums being 0, 0, 1, 1, 2, 3 and 3 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).
*/


/*
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    int i = 0;
    for (int n : nums)
        if (i < 2 || n > nums[i-2])
            nums[i++] = n;
    return i;
    }   
};
*/


#include <bits/stdc++.h>
using namespace std;

vector<int>removeDuplicates(vector<int>& nums) 
{
    int i = 0;
    vector<int>res;
    for (int n : nums)
    {
        if (i < 2 || n > nums[i-2])
            res.push_back(n);
        i++;
    }
    return res;
}

int main()
{
    //cout<<"Hello World";
    vector<int>v={1,1,1,2,2,3,3,3,3,3,5,5,5,5};
    //OUTPUT = {1,1,2,2,3,3,5,5}
    vector<int>res=removeDuplicates(v);
    for(auto i:res)
        cout<<i<<" ";
    return 0;
}
