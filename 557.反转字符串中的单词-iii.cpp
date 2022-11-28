/*
 * @lc app=leetcode.cn id=557 lang=cpp
 *
 * [557] 反转字符串中的单词 III
 */
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
// @lc code=start
class Solution
{
public:
    string reverseWords(string s)
    {
        int length = s.size();
        int i = 0;
        while (i < length)
        {
            int init = i;
            while (i < length && s[i] != ' ')
            {
                i++;
            }
            int right = i - 1, left = init;
            while (left < right)
            {
                swap(s[left], s[right]);
                left++;
                right--;
            }
            i++;
        }
        return s;
    }
};
// @lc code=end
