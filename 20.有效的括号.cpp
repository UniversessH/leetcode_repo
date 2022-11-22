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
            if (s[i] == '(')
            {
                stk.push(s[i]);
            }
            else
            {
                if (bracketMap[s[i]] != stk.top())
                {
                    return false;
                }
                stk.pop();
            }
        }
        printf("%c", stk.top());
        return stk.empty();
    }
};
// @lc code=end
