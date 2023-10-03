/*
Leetcode details
Runtime
0ms
Beats 100.00%of users with C++
*/

class Solution
{
public:
    int maximumWealth(vector<vector<int>> &accounts)

    {
        int max = 0;
        while (accounts.size() > 0)
        {
            int sum = 0;
            for (int i = 0; i < accounts[0].size(); i++)
            {
                sum += accounts[0][i];
            }
            if (max < sum)
            {
                max = sum;
            }
            accounts.erase(accounts.begin());
        }
        return max;
    }
};