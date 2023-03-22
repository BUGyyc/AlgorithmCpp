/*
 * @lc app=leetcode.cn id=2586 lang=cpp
 *
 * [2586] 统计范围内的元音字符串数
 */

// @lc code=start
class Solution
{
public:
    int vowelStrings(vector<string> &words, int left, int right)
    {
        int res = 0;
        for (int i = left; i <= right; i++)
        {
            auto str = words[i];
            auto s = str.front();
            auto e = str.back();
            bool sFlag = (s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u');
            bool eFlag = (e == 'a' || e == 'e' || e == 'i' || e == 'o' || e == 'u');
            if (sFlag && eFlag)
                res++;
        }

        return res;
    }
};
// @lc code=end
