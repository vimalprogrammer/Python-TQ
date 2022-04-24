/*
You are given an integer array coins representing coins of different denominations and an integer amount representing a total amount of money.

Return the fewest number of coins that you need to make up that amount. If that amount of money cannot be made up by any combination of the coins, return -1.

You may assume that you have an infinite number of each kind of coin.

Example 1:
Input: coins = [1,2,5], amount = 11
Output: 3
Explanation: 11 = 5 + 5 + 1

Example 2:
Input: coins = [2], amount = 3
Output: -1

Example 3:
Input: coins = [1], amount = 0
Output: 0
*/

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
    int len=coins.size();
        vector<vector<int>>a(len+1,vector<int> (amount+1));
        for(int i=1;i<=amount;i++)//infinity in col
            a[0][i]=1e5;
        for(int i=0;i<=len;i++)//0 for each row
            a[i][0]=0;
        for(int i=1;i<=len;++i)
        {
            for(int j=1;j<=amount;++j)
            {
                if(j>=coins[i-1])
                    a[i][j]=min(a[i-1][j],1+a[i][j-coins[i-1]]);//min
                else
                    a[i][j]=a[i-1][j];
            }
        }
        return a[len][amount]>1e4?-1:a[len][amount];
    }
};