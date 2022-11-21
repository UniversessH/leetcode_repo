/*
 * @lc app=leetcode.cn id=14 lang=cpp
 *
 * [14] 最长公共前缀
 */
#include <iostream>
#include <vector>
using namespace std;
// @lc code=start
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(!strs.size()){
            return "";
        }
        string prefix = strs[0];
        for (int i = 0; i < strs.size(); i++){
            prefix = checkPrefix(prefix, strs[i]);
            if (!prefix.size()) return "";
        }
        return prefix;
    }

     string checkPrefix(const string& prefix, const string& word) {
        int length = min(prefix.size(), word.size());
        int index = 0;
        while (index < length && prefix[index] == word[index]) {
            index++;
        }
        return prefix.substr(0, index);
    }
};
// @lc code=end

