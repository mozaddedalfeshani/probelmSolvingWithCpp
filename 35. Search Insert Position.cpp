class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int ans = 0;
        int size = nums.size();
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == target)
            {
                return i;
                break;
            }
            else if (nums[i] > target)
            {
                if (i > 0)
                {
                    ans = i;
                    // ans = (i-1)+ (target - nums[i-1]);
                    break;
                }
                else if (i == 0)
                {
                    return 0;
                }
            }
            else if (i == (size - 1))
            {
                ans = i + 1;
                // ans = i + (target - nums[i]);
                break;
            }
        }
        return ans;
    }
};