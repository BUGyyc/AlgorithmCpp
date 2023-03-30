/*
 * @lc app=leetcode.cn id=2535 lang=cpp
 *
 * [2535] 数组元素和与数字和的绝对差
 */

// @lc code=start
class Solution
{
public:
    int differenceOfSum(vector<int> &nums)
    {
        int sum = 0;
        int stepSum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            int num = nums[i];
            if (num <= 9)
            {
                stepSum += num;
            }
            else
            {
                while (num != 0)
                {
                    int val = num % 10;
                    stepSum += val;
                    num = num / 10;
                }
            }
        }

        return sum > stepSum ? sum - stepSum : stepSum - sum;
    }
};
// @lc code=end
