/*
 * @lc app=leetcode.cn id=3 lang=cpp
 *
 * [3] 无重复字符的最长子串
 */
#include <iostream>
#include <algorithm>
#include <unordered_set>
using namespace std;
// @lc code=start
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        unordered_set<char> letterSet;
        int length = s.size();
        int right = -1;
        int res;
        for (int i = 0; i < length; i++)
        {
            if (i != 0)
            {
                letterSet.erase(s[i - 1]);
            }
            while (right + 1 < length && !letterSet.count(s[right + 1]))
            {
                letterSet.insert(s[right + 1]);
                right++;
            }
            res = max(res, right - i + 1);
        }
        return res;
    }
};
// @lc code=end
