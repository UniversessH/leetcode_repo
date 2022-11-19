/*
 * @lc app=leetcode.cn id=13 lang=cpp
 *
 * [13] 罗马数字转整数
 */
#include <unordered_map>
#include <iostream>

using namespace std;

// @lc code=start
class Solution
{
private:
    // unordered_map<char, int> ValueMap =
    //     {
    //         {'I', 1},
    //         {'V', 5},
    //         {'X', 10},
    //         {'L', 50},
    //         {'C', 100},
    //         {'D', 500},
    //         {'M', 1000},
    // };
    int getCharValue(char x)
    {
        switch (x)
        {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
        default:
            return 0;
        }
    }

public:
    int romanToInt(string s)
    {
        int res = 0;
        for (int i = 0; i < s.length(); i++)
        {
            int currentValue = getCharValue(s[i]);
            int nextValue = getCharValue(s[i + 1]);
            if (currentValue < nextValue)
            {
                res = res - currentValue;
            }
            else
            {
                res = res + currentValue;
            }
        }
        return res;
    }
};
// @lc code=end
