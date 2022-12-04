/*
 * @lc app=leetcode.cn id=695 lang=cpp
 *
 * [695] 岛屿的最大面积
 */
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// @lc code=start
class Solution
{
public:
    const int dx[4] = {-1, 1, 0, 0};
    const int dy[4] = {0, 0, 1, -1};

    // int dfs(vector<vector<int>> &grid, int x, int y)
    // {
    //     if (grid[x][y] == 1)
    //     {
    //         grid[x][y] = -1;
    //         int ans = 1;
    //         for (int i = 0; i < 4; i++)
    //         {
    //             int newX = x + dx[i];
    //             int newY = y + dy[i];
    //             if (newX >= 0 && newX <= grid.size() && newY >= 0 && newY <= grid[0].size())
    //             {
    //                 ans += dfs(grid, newX, newY);
    //                 return ans;
    //             }
    //         }
    //     }
    //     return 0;
    // }

    int dfs(vector<vector<int>> &grid, int x, int y)
    {
        if (x < 0 || y < 0 || x >= grid.size() || y >= grid[0].size() || grid[x][y] != 1)
        {
            return 0;
        }
        grid[x][y] = 0;
        int ans = 1;
        for (int i = 0; i < 4; i++)
        {
            int newX = x + dx[i];
            int newY = y + dy[i];
            ans += dfs(grid, newX, newY);
        }
        return ans;
    }

    int maxAreaOfIsland(vector<vector<int>> &grid)
    {
        int m = grid.size(), n = grid[0].size();
        // vector<int> groupCount;
        int ans = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == 1)
                {
                    ans = max(ans, dfs(grid, i, j));
                }
            }
        }
        return ans;
    }
};
// @lc code=end
