/*
Given an integer array nums of length n and an integer target, find three integers in nums such that the sum is closest to target.
Return the sum of the three integers.
You may assume that each input would have exactly one solution.

Input: nums = [-1,2,1,-4], target = 1
Output: 2
Explanation: The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).
*/


//Three pointer approach
class Solution {
public:
    int threeSumClosest(vector<int>& v, int target) {
    sort(v.begin(),v.end());
    int n=v.size();
    int res=0,diff=INT_MAX;
    for(int i=0;i<n;i++)
    {
        int j=i+1,end=n-1;
        while(j<end)
        {
           int sum=v[i]+v[j]+v[end];
            if(abs(sum-target)<diff)
            {
                diff=abs(sum-target);
                res=sum;
            }
            if(sum<target)
                j++;
            else
                end--;
        }
    }
        return res;
}
};