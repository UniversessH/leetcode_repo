/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除有序数组中的重复项
 */
#include <iostream>
#include <vector>
using namespace std;

// @lc code=start
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int length = nums.size();
        if (length == 0)
        {
            return 0;
        }
        int back = 1, forward = 1;
        while (forward < length)
        {
            if (nums[forward] != nums[forward - 1])
            {
                nums[back] = nums[forward];
                back++;
            }
            forward++;
        }
        return back;
    }
};
// @lc code=end
