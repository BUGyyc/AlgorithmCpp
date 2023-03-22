/*
 * @lc app=leetcode.cn id=2582 lang=cpp
 *
 * [2582] 递枕头
 */

// @lc code=start
class Solution
{
public:
    int passThePillow(int n, int time)
    {
        int round = 0;
        int step = 0;
        round = time / (n - 1);
        step = time % (n - 1);

        return round % 2 == 0 ? step + 1 : n - step;
    }
};
// @lc code=end
