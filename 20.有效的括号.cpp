/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */
#include <iostream>
#include <unordered_map>
#include <stack>
using namespace std;

// @lc code=start
class Solution
{
public:
    bool isValid(string s)
    {
        unordered_map<char, char> bracketMap =
            {
                {')', '('},
                {']', '['},
                {'}', '{'}};
        int stringLength = s.size();
        if (stringLength % 2 != 0)
            return false;
        stack<char> stk;
        for (int i = 0; i < stringLength; i++)
        {
            // if (s[i] == '(')
            // {
            //     stk.push(s[i]);
            // }
            // else
            // {
            //     if (!stk.empty() && stk.top() != bracketMap[s[i]])
            //     {
            //         return false;
            //     }
            //     stk.pop();
            // }
            if (bracketMap.count(s[i]))
            // if (s[i] == ')' || ']' || '}')
            {
                if (stk.empty() || stk.top() != bracketMap[s[i]])
                {
                    return false;
                }
                stk.pop();
            }
            else
            {
                stk.push(s[i]);
            }
        }
        return stk.empty();
    }
};
// @lc code=end
