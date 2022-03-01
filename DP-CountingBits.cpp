/*

Given an integer n, return an array ans of length n + 1 such that for each i (0 <= i <= n), ans[i] is the number of 1's in the binary representation of i.

Example 1:
Input: n = 2
Output: [0,1,1]
Explanation:
0 --> 0
1 --> 1
2 --> 10

Example 2:
Input: n = 5
Output: [0,1,1,2,1,2]
Explanation:
0 --> 0
1 --> 1
2 --> 10
3 --> 11
4 --> 100
5 --> 101

Explanation:
In this solution, we can think about whether the number is even or odd.
If the number is even, the number of 1s is equal to the number which is half of it.
For e.g., the number 8 has the same 1s as the number 4.
The number 10 has the same amount of 1 bits as number 5.
That is because number i is just left shift by 1 bit from number i / 2.
Therefore, they should have the same number of 1 bits.

If the numbers are odd, e.g. 1, 3, 5, 7.
The number of 1 bits is equal to the number (i - 1) plus 1.
For e.g., for number 3, the number of 1 bits equals to the number 2 plus 1.
For number 11, it equals to number 10 + 1.
*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>mem(n+1);
        for(int i=1;i<=n;i++)
        {
            if(i%2!=0)//odd
                mem[i]=(mem[i/2])+1;
            else
                mem[i]=mem[i/2];
        }
        return mem;
    }
};