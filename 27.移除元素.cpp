/*
 * @lc app=leetcode.cn id=27 lang=cpp
 *
 * [27] 移除元素
 */
#include <iostream>
#include <vector>
using namespace std;

// @lc code=start
class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int length = nums.size(), slow = 0;
        for (int fast = 0; fast < length; fast++)
        {
            if (nums[fast] != val)
            {
                nums[slow++] = nums[fast];  
            }
        }
        return slow;
    }
};
// @lc code=end
