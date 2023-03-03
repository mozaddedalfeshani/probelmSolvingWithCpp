class Solution
{
public:
    int fib(int n)
    {
        vector<int> room(n + 2, 0);

        room[0] = 0;
        room[1] = 1;
        for (int i = 2; i <= n; i++)
        {
            room[i] = room[i - 2] + room[i - 1];
        }
        return room[n];
    }
};