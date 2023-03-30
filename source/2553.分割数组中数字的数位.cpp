/*
 * @lc app=leetcode.cn id=2553 lang=cpp
 *
 * [2553] 分割数组中数字的数位
 */

// @lc code=start
class Solution
{
public:
    vector<int> separateDigits(vector<int> &nums)
    {
        vector<int> res;
        for (int i = nums.size() - 1; i >= 0; i--)
        {
            int num = nums[i];
            if (num <= 9)
            {
                res.push_back(num);
                num = num / 10;
            }
            else
            {
                while (num > 0)
                {
                    int step = num % 10;
                    num = num / 10;
                    res.push_back(step);
                }
            }
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
// @lc code=end
