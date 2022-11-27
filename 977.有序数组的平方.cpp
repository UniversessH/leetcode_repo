/*
 * @lc app=leetcode.cn id=977 lang=cpp
 *
 * [977] 有序数组的平方
 */
#include <iostream>
#include <vector>
using namespace std;

// @lc code=start
class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        vector<int> res;
        int length = nums.size();
        int zeroIndex = -1;
        for (int i = 0; i < length; i++)
        {
            if (nums[i] < 0)
                zeroIndex = i;
        }
        int negativePointer = zeroIndex, positiveIndex = zeroIndex + 1;
        while (negativePointer >= 0 || positiveIndex < length)
        {
            if (negativePointer < 0)
            {
                res.push_back(nums[positiveIndex] * nums[positiveIndex]);
                positiveIndex++;
            }
            else if (positiveIndex > length - 1)
            {
                res.push_back(nums[negativePointer] * nums[negativePointer]);
                negativePointer--;
            }
            else if (nums[negativePointer] * nums[negativePointer] < nums[positiveIndex] * nums[positiveIndex])
            {
                res.push_back(nums[negativePointer] * nums[negativePointer]);
                negativePointer--;
            }
            else
            {
                res.push_back(nums[positiveIndex] * nums[positiveIndex]);
                positiveIndex++;
            }
        }
        return res;
    }
};
// @lc code=end
