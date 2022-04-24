/*
You are given an integer array coins representing coins of different denominations and an integer amount representing a total amount of money.

Return the number of combinations that make up that amount. If that amount of money cannot be made up by any combination of the coins, return 0.

You may assume that you have an infinite number of each kind of coin.
The answer is guaranteed to fit into a signed 32-bit integer.

Example 1:
Input: amount = 5, coins = [1,2,5]
Output: 4
Explanation: there are four ways to make up the amount:
5=5
5=2+2+1
5=2+1+1+1
5=1+1+1+1+1

Example 2:
Input: amount = 3, coins = [2]
Output: 0
Explanation: the amount of 3 cannot be made up just with coins of 2.

Example 3:
Input: amount = 10, coins = [10]
Output: 1
*/

#define fastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); 

class Solution {
public:
    int change(int amount, vector<int>& coins) {
        fastIO;
        int len=coins.size();
        vector<vector<int>>a(len+1,vector<int> (amount+1));
        for(int i=1;i<=amount;i++)
            a[0][i]=0;
        for(int i=0;i<=len;i++)
            a[i][0]=1;
        for(int i=1;i<=len;++i)
        {
            for(int j=1;j<=amount;++j)
            {
                if(j>=coins[i-1])
                    a[i][j]=a[i-1][j]+a[i][j-coins[i-1]];
                else
                    a[i][j]=a[i-1][j];
            }
        }
        return a[len][amount];
    }
};