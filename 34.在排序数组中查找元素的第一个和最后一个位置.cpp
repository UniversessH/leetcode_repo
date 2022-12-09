/*
 * @lc app=leetcode.cn id=34 lang=cpp
 *
 * [34] 在排序数组中查找元素的第一个和最后一个位置
 */
#include <iostream>
#include <vector>
using namespace std;
// @lc code=start
class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        int length = nums.size();
        int middle = length / 2, left = 0, right = length - 1;
        vector<int> res = vector(2, -1);
        while (left <= right)
        {
            if (target > nums[middle])
            {
                left = middle + 1;
                middle = (left + right) / 2;
            }
            else if (target < nums[middle])
            {
                right = middle - 1;
                middle = (left + right) / 2;
            }
            else if (target == nums[middle])
            {
                res[0] = middle;
                res[1] = middle;
                int lpt = middle - 1;
                int rpt = middle + 1;
                while (lpt >= 0)
                {
                    if (nums[lpt] == target)
                    {
                        res[0] = lpt;
                        lpt--;
                    }
                    else
                    {
                        break;
                    }
                }
                while (rpt <= length - 1)
                {
                    if (nums[rpt] == target)
                    {
                        res[1] = rpt;
                        rpt++;
                    }
                    else
                    {
                        break;
                    }
                }
                return res;
            }
        }
        return res;
    }
};
// @lc code=end
