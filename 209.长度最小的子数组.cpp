/*
 * @lc app=leetcode.cn id=209 lang=cpp
 *
 * [209] 长度最小的子数组
 */
#include <iostream>
#include <vector>
using namespace std;

// @lc code=start
class Solution
{
public:
    int minSubArrayLen(int target, vector<int> &nums)
    {
        int res = INT32_MAX;
        int sum = 0, i = 0;
        for (int j = 0; j < nums.size(); j++)
        {
            sum += nums[j];
            while (sum >= target)
            {
                int clipLength = j - i + 1;
                res = clipLength > res ? res : clipLength;
                sum -= nums[i++];
            }
        }
        return res == INT32_MAX ? 0 : res;
    }
};
// @lc code=end
