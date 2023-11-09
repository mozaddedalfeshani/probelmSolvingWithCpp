class Solution
{
public:
    int reverse(int x)
    {
        int ans = 0;

        while (x != 0)
        {

            if (abs(ans) > 214748364)
                return 0;
            ans = ans * 10 + x % 10;
            x = x / 10;
        }
        return ans;
    }
};
