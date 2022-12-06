/*
 * @lc app=leetcode.cn id=994 lang=cpp
 *
 * [994] 腐烂的橘子
 */
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// @lc code=start
class Solution
{
public:
    const int dx[4] = {0, 0, 1, -1};
    const int dy[4] = {1, -1, 0, 0};

    int orangesRotting(vector<vector<int>> &grid)
    {
        int m = grid.size(), n = grid[0].size();
        queue<pair<int, int>> badOrange;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == 2)
                {
                    badOrange.emplace(i, j);
                }
            }
        }
        int res = bfs(grid, badOrange);
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == 1)
                {
                    return -1;
                }
            }
        }
        if (res == 0)
        {
            return res;
        }
        else
        {
            return res - 1;
        }
    }

    int bfs(vector<vector<int>> &grid, queue<pair<int, int>> badOrange)
    {
        if (badOrange.empty())
        {
            return 0;
        }
        int m = grid.size(), n = grid[0].size();
        queue<pair<int, int>> res;
        while (!badOrange.empty())
        {
            auto [i, j] = badOrange.front();
            badOrange.pop();
            for (int x = 0; x < 4; x++)
            {
                int newI = i + dx[x];
                int newJ = j + dy[x];
                if (newI >= 0 && newI < m && newJ >= 0 && newJ < n && grid[newI][newJ] == 1)
                {
                    grid[newI][newJ] = 2;
                    res.emplace(newI, newJ);
                }
            }
        }
        int rank = bfs(grid, res);
        return rank + 1;
    }
};
// @lc code=end
