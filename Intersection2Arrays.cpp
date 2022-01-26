
/*
Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.
Input: nums1 = [4,9,12], nums2 = [2,3,4,8,9,9,9,10]
Output: [4,9]

*/


class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    int n1=nums1.size();
    int n2=nums2.size();
    sort(nums1.begin(),nums1.end());
    sort(nums2.begin(),nums2.end());
    int i=0,j=0;
    vector<int>v;
    while(i<n1 && j<n2)
    {
        if(i>0 && nums1[i]==nums1[i-1])
        {
            i++;
            continue;
        }
        if(nums1[i]<nums2[j])
            i++;
        else if(nums1[i]>nums2[j])
            j++;
        else
        {
            v.push_back(nums1[i]);
            i++;j++;
        }
    }
    return v;
    }
};