class Solution
{
public:
    bool hasGroupsSizeX(vector<int> &deck)
    {
        unordered_map<int, int> map;
        for (auto element : deck)
        {
            if (map.find(element) == map.end())
            {
                map[element] = 1;
            }
            else
            {
                map[element] = map[element] + 1;
            }
        }
        int min = map.begin()->second;
        for (auto each : map)
        {
            if (each.second < min)
            {
                min = each.second;
            }
        }
        if (min < 2)
        {
            return false;
        }
        int gcd = map.begin()->second;
        for (auto element : map)
        {
            gcd = function_gcd(gcd, element.second);
        }
        if (gcd < 2)
        {
            return false;
        }
        return true;
    }
    int function_gcd(int a, int b)
    {
        if (a == 0)
        {
            return b;
        }
        return function_gcd(b % a, a);
    }
};