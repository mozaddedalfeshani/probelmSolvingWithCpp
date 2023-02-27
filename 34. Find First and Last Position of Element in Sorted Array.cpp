class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        vector<int> num;
        bool a = false;
        if (nums.size() == 0)
        {
            return {-1, -1};
        }
        else if (nums.size() == 1)
        {
            if (nums[0] == target)
            {
                return {0, 0};
            }
            else
            {
                return {-1, -1};
            }
        }
        else
        {
            for (int i = 0; i < nums.size(); i++)
            {
                if (nums[i] == target)
                {
                    num.push_back(i);
                    a = true;
                }
            }
            if (a == false)
            {
                return {-1, -1};
            }
            else if (num.size() == 1)
            {
                return {num[0], num[0]};
            }
            else if (num.size() > 2)
            {
                return {num[0], num[num.size() - 1]};
            }
            else
            {
                return num;
            }
        }
    }
};