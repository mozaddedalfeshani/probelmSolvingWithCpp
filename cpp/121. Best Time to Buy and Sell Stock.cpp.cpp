class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int maxProfit = 0;
        int minSofar = prices[i];
        for (int i = 0; i < prices.size(); i++)
        {
            minSofar = min(minSofar, prices[i]);
            maxProfit = max(maxProfit, prices[i] - minSofar);
        }
        return maxProfit;
    }
};