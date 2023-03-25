
class Solution
{
public:
    int numWaterBottles(int numBottles, int numExchange)
    {

        int last = numBottles;
        int sum = numBottles;
        int a = sum;
        int shes = 0;
        while (last > 0)
        {
            last = last / numExchange;
            sum = sum + last;
            shes = a % numExchange;

            last = shes + last;
            a = last;
            if (last < numExchange)
            {
                break;
            }
        }
        return sum;
    }
};
