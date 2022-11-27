/*
 * @lc app=leetcode.cn id=189 lang=cpp
 *
 * [189] 轮转数组
 */
#include <iostream>
#include <vector>
using namespace std;

// @lc code=start
class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        int length = nums.size();
        int res[length];
        for (int i = 0; i < length; i++)
        {
            res[(i + k) % length] = nums[i];
        }
        for (int i = 0; i < length; i++)
        {
            nums[i] = res[i];
        }
    }
};
// @lc code=end
