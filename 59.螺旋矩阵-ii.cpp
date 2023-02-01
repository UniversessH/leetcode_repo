/*
 * @lc app=leetcode.cn id=59 lang=cpp
 *
 * [59] 螺旋矩阵 II
 */
#include <iostream>
#include <vector>
using namespace std;
// @lc code=start
class Solution
{
public:
    vector<vector<int>> generateMatrix(int n)
    {
        vector<vector<int>> res(n, vector<int>(n, 0));
        // 记得初始化矩阵
        int count = 1;
        int loop = n / 2, midIndex = n / 2; //转的圈数恰好是n整处2
        int startX = 0, startY = 0;
        int offset = 1;
        int i, j;
        while (loop--)
        {
            i = startX;
            j = startY;
            for (; j < n - offset; j++)
            {
                res[i][j] = count++;
            }
            for (; i < n - offset; i++)
            {
                res[i][j] = count++;
            }
            for (; j > startY; j--)
            {
                res[i][j] = count++;
            }
            for (; i > startX; i--)
            {
                res[i][j] = count++;
            }
            startX++;
            startY++;
            offset++; //每转一圈偏移量加一
        }
        if (n % 2 != 0)
        {
            res[midIndex][midIndex] = count;
        }
        return res;
    }
};
// @lc code=end
