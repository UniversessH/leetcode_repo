/*
 * @lc app=leetcode.cn id=9 lang=cpp
 *
 * [9] 回文数
 */

// @lc code=start
#include <iostream>

class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0 || x % 10 == 0 && x != 0)
        {
            return false;
        }
        int res = 0;
        while (res < x)
        {
            res = res * 10 + x % 10;
            x = x / 10;
        }
        return res == x || res / 10 == x;
    }
};
// @lc code=end
