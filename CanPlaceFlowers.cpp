/*
You have a long flowerbed in which some of the plots are planted, and some are not. However, flowers cannot be planted in adjacent plots.

Given an integer array flowerbed containing 0's and 1's, where 0 means empty and 1 means not empty, and an integer n, return if n new flowers can be planted in the flowerbed without violating the no-adjacent-flowers rule.

Example 1:

Input: flowerbed = [1,0,0,0,1], n = 1
Output: true

Example 2:

Input: flowerbed = [1,0,0,0,1], n = 2
Output: false

Explanation:
So, we need to iterate over all the flowerbed and we need to focus our attention on the fact where we can plant flower. The flower can only be planted where there is a no flower yet. So, we need to search for the position where value is 0.
We start from 1st index and we will move till we find a value i.e. 0 & going forward we find a place which has no flower. Now the condition says there should not be any flower adjacent to this flower. So, in order to place this flower we have to make sure that there is no adjacent flower.
So, we need to check these two position i.e. previous position & next position.
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& v, int n) {
    //sort(flowerbed.begin(),flowerbed.end());
    int sz=v.size();
    int cnt=0;
    for(int i=0;i<sz;i++)
    {
        if(v[i]==0)
        {
            int previous=(i==0 || v[i-1]==0)?0:1;
            int next=(i==sz-1 || v[i+1]==0)?0:1;

            if(previous==0 && next==0)
            {
                v[i]=1;
                cnt++;
            }
        }
    }
    return cnt>=n;
    }
};