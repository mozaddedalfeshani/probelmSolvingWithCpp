class Solution
{
public:
    int findPeakElement(vector<int> &nums)
    {
        int cought = 0, i = 0;
        int max = nums[0];
        while (nums.size() > 0)
        {
            if (max < nums[0])
            {
                max = nums[0];
                cought = i;
            }
            i++;
            nums.erase(nums.begin());
        }
        return cought;
    }
};