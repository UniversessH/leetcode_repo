/*
 * @lc app=leetcode.cn id=283 lang=cpp
 *
 * [283] 移动零
 */
#include <iostream>
#include <vector>
using namespace std;

// @lc code=start
class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        // int length = nums.size();
        // int zeroPointer = 0, Pointer = 0;
        // while (Pointer < length && zeroPointer < length)
        // {
        //     if(nums[zeroPointer] == 0 && nums[Pointer] != 0 && zeroPointer < Pointer)
        //     {
        //         nums[zeroPointer] = nums[Pointer];
        //         nums[Pointer] = 0;
        //         Pointer++;
        //         zeroPointer++;
        //     }else if(nums[Pointer] == 0 || zeroPointer > Pointer){
        //         Pointer++;
        //     }else if(nums[zeroPointer] != 0){
        //         zeroPointer++;
        //     }
        // } 自己的解法
        int n = nums.size(), left = 0, right = 0;
        while (right < n) {
            if (nums[right]) {
                swap(nums[left], nums[right]);
                left++;
            }
            right++;
        }

    }
};
// @lc code=end
