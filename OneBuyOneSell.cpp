/*
Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.
*/


class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int n=prices.size();
    int profit=0;
    int leastSofar=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(leastSofar>prices[i])
            leastSofar=prices[i];
        
        int profitIfSoldToday=prices[i]-leastSofar;
        if(profitIfSoldToday>profit)
            profit=profitIfSoldToday;
    }
    return profit;
    }
};