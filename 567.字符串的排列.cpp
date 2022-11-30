/*
 * @lc app=leetcode.cn id=567 lang=cpp
 *
 * [567] 字符串的排列
 */
#include <iostream>
#include <unordered_set>
using namespace std;
// @lc code=start
class Solution
{
public:
    bool checkInclusion(string s1, string s2)
    {
        // int s1Length = s1.size(), s2Length = s2.size();
        // unordered_set<char> letterSet;
        // for (int i = 0; i < s1Length; i++)
        // {
        //     letterSet.insert(s1[i]);
        // }
        // if (s1Length > s2Length)
        // {
        //     return false;
        // }
        // bool isValid = true;
        // for (int i = 0; i < s2Length - s1Length + 1; i++)
        // {
        //     isValid = true;
        //     for (int j = i; j < i + s1Length; j++)
        //     {
        //         if (!letterSet.count(s2[j]))
        //         {
        //             isValid = false;
        //             break;
        //         }
        //     }
        //     if (isValid)
        //         return true;
        // }
        // return false;
         int n = s1.length(), m = s2.length();
        if (n > m) {
            return false;
        }
        vector<int> cnt(26);
        for (int i = 0; i < n; ++i) {
            --cnt[s1[i] - 'a'];
        }
        int left = 0;
        for (int right = 0; right < m; ++right) {
            int x = s2[right] - 'a';
            ++cnt[x];
            while (cnt[x] > 0) {
                --cnt[s2[left] - 'a'];
                ++left;
            }
            if (right - left + 1 == n) {
                return true;
            }
        }
        return false;
    }
};
// @lc code=end
