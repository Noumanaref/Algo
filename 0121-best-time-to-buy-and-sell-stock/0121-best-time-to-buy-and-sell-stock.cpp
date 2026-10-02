class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = 0;
        int r = 1;
        int max_profit = 0;

        while (r < prices.size())
        {
            // profitability consition
            if (prices[l] < prices[r])
            {
                int profit = prices[r] - prices[l];
                max_profit = max(profit, max_profit);
            }
            else
            {
                l = r;
            }

            r+=1;
        }
        return max_profit;
    }
};