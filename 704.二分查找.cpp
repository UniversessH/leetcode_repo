/*
 * @lc app=leetcode.cn id=704 lang=cpp
 *
 * [704] 二分查找
 */
#include <iostream>
#include <vector>
using namespace std;
// @lc code=start
class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int left = 0, right = nums.size() - 1;
        while (left <= right)
        {
            int midIndex = (right - left) / 2 + left;
            int midNum = nums[midIndex];
            if (midNum == target)
            {
                return midIndex;
            }
            else if (midNum > target)
            {
                right = midIndex - 1;
            }
            else
            {
                left = midIndex + 1;
            }
        }
        return -1;
    }
};
// @lc code=end
