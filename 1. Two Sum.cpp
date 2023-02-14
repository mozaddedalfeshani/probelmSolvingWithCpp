class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int a = 0, b = 0;
        for (int i = 0; i < size(nums); i++)
        {
            for (int j = i + 1; j < size(nums); j++)
            {
                if ((nums[i] + nums[j]) == target)
                {
                    a = i;
                    b = j;
                    break;
                }
            }
        }
        return {a, b};
    }
};