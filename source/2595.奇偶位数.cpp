/*
 * @lc app=leetcode.cn id=2595 lang=cpp
 *
 * [2595] 奇偶位数
 */

// @lc code=start
class Solution
{
public:
    vector<int> evenOddBit(int n)
    {
        int even = 0, odd = 0;
        for (int i = 0; i < 32; i++)
        {
            int bit = 0;
            // 取下第 I 位，判断是否是1
            if ((1 << i) & n)
            {
                bit = 1;
            }
            else
            {
                continue;
            }

            if (i % 2 == 0)
                even++;
            else
                odd++;
        }

        return {even, odd};
    }
};
// @lc code=end
