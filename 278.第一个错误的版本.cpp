/*
 * @lc app=leetcode.cn id=278 lang=cpp
 *
 * [278] 第一个错误的版本
 */

// @lc code=start
// The API isBadVersion is defined for you.
bool isBadVersion(int version);

class Solution
{
public:
    int firstBadVersion(int n)
    {
        int left = 1, right = n;
        while (left <= right)
        {
            int middleIndex = (right - left) / 2 + left;
            if (isBadVersion(middleIndex))
            {
                right = middleIndex - 1;
            }
            else
            {
                left = middleIndex + 1;
            }
            if (!isBadVersion(middleIndex - 1) && isBadVersion(middleIndex))
                return middleIndex;
        }
        return -1;
    }
};
// @lc code=end
