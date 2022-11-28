/*
 * @lc app=leetcode.cn id=167 lang=cpp
 *
 * [167] 两数之和 II - 输入有序数组
 */
#include <iostream>
#include <vector>
using namespace std;

// @lc code=start
class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        // 自己的解法
        // int index1 = 0, index2 = 1;
        // while (numbers[index1] + numbers[index2] != target)
        // {
        //     if (index2 == numbers.size() - 1)
        //     {
        //         index2 = ++index1 + 1;
        //     }
        //     else
        //     {
        //         index2++;
        //         if (numbers[index2] == numbers[index1])
        //         {
        //             index1++;
        //         }
        //     }
        // }
        // return {index1 + 1, index2 + 1};

        //官方题解
        int low = 0, high = numbers.size() - 1;
        while (low < high)
        {
            int sum = numbers[low] + numbers[high];
            if (sum == target)
            {
                return {low + 1, high + 1};
            }
            else if (sum < target)
            {
                ++low;
            }
            else
            {
                --high;
            }
        }
        return {-1, -1};
    }
};
// @lc code=end
