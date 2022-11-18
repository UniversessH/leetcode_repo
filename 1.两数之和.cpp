/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */
#include <algorithm>
#include <vector>
#include <iostream>
#include <unordered_map>
using namespace std;

// @lc code=start
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> hashmap;
        for (int i = 0; i < nums.size(); i++)
        {
            auto item = hashmap.find(target - nums[i]);
            if (item != hashmap.end())
            {
                return {item->second, i};
            }
            hashmap[nums[i]] = i;
        }
        return {};
    }
};
// @lc code=end
