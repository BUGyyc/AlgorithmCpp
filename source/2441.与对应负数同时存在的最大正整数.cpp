/*
 * @lc app=leetcode.cn id=2441 lang=cpp
 *
 * [2441] 与对应负数同时存在的最大正整数
 */

// @lc code=start
class Solution
{
public:
    int findMaxK(vector<int> &nums)
    {
        int max = -1;
        for (int i = 0; i <= nums.size() - 2; i++)
        {
            bool f = nums[i] < 0;
            for (int j = i + 1; j <= nums.size() - 1; j++)
            {
                if (nums[i] + nums[j] == 0)
                {
                    int val = (f == false) ? nums[i] : nums[j];
                    if (val > max)
                    {
                        max = val;
                    }
                }
            }
        }
        return max;
    }
};
// @lc code=end
