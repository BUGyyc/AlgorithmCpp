/*
 * @lc app=leetcode.cn id=2544 lang=cpp
 *
 * [2544] 交替数字和
 */

// @lc code=start
class Solution
{
public:
    int alternateDigitSum(int n)
    {
        int step = 0;
        int sum = 0;
        while (n != 0)
        {
            int item = n % 10;
            n = n / 10;
            sum += (step % 2 == 0) ? item : -1 * item;
            step++;
        }

        return (step % 2 == 0) ? -1 * sum : sum;
    }
};
// @lc code=end
