/*
 * @lc app=leetcode.cn id=733 lang=cpp
 *
 * [733] 图像渲染
 */
#include <iostream>
#include <vector>
using namespace std;
// @lc code=start
class Solution
{
public:
    void dfs(vector<vector<int>> &image, int x, int y, int orgColor, int color)
    {
        const int dx[4] = {1, -1, 0, 0};
        const int dy[4] = {0, 0, -1, 1};
        if (image[x][y] == orgColor)
        {
            image[x][y] = color;
            for (int i = 0; i < 4; i++)
            {
                int newX = x + dx[i], newY = y + dy[i];
                if (newX >= 0 && newX < image.size() && newY >= 0 && newY <= image[0].size())
                {
                    dfs(image, newX, newY, orgColor, color);
                }
            }
        }
    }

    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color)
    {
        int orgColor = image[sr][sc];
        if (color != orgColor)
        {
            dfs(image, sr, sc, orgColor, color);
        }
        return image;
    }
};
// @lc code=end
