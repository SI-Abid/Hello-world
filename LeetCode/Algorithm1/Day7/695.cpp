#include <bits/stdc++.h>
using namespace std;

// You are given an m x n binary matrix grid. An island is a group of 1's (representing land) connected 4-directionally (horizontal or vertical.) You may assume all four edges of the grid are surrounded by water.
// The area of an island is the number of cells with a value 1 in the island.
// Return the maximum area of an island in grid. If there is no island, return 0.
// Input: grid = [[0,0,1,0,0,0,0,1,0,0,0,0,0],[0,0,0,0,0,0,0,1,1,1,0,0,0],[0,1,1,0,1,0,0,0,0,0,0,0,0],[0,1,0,0,1,1,0,0,1,0,1,0,0],[0,1,0,0,1,1,0,0,1,1,1,0,0],[0,0,0,0,0,0,0,0,0,0,1,0,0],[0,0,0,0,0,0,0,1,1,1,0,0,0],[0,0,0,0,0,0,0,1,1,0,0,0,0]]
// Output: 6

class Solution
{
public:
    int maxAreaOfIsland(vector<vector<int>> &grid)
    {
        int m = grid.size(), n = grid[0].size();
        int res = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == 1)
                {
                    int area = 0;
                    queue<pair<int, int>> q;
                    q.push({i, j});
                    while (!q.empty())
                    {
                        int r = q.front().first, c = q.front().second;
                        q.pop();
                        if (grid[r][c] == 1)
                        {
                            grid[r][c] = 0;
                            area++;
                            if (r - 1 >= 0 && grid[r - 1][c] == 1)
                            {
                                q.push({r - 1, c});
                            }
                            if (r + 1 < m && grid[r + 1][c] == 1)
                            {
                                q.push({r + 1, c});
                            }
                            if (c - 1 >= 0 && grid[r][c - 1] == 1)
                            {
                                q.push({r, c - 1});
                            }
                            if (c + 1 < n && grid[r][c + 1] == 1)
                            {
                                q.push({r, c + 1});
                            }
                        }
                    }
                    res = max(res, area);
                }
            }
        }
        return res;
    }
};

int main()
{
    Solution sol;
    vector<vector<int>> grid = {{0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0},
                                {0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0},
                                {0, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
                                {0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 0, 0},
                                {0, 1, 0, 0, 1, 1, 0, 0, 1, 1, 1, 0, 0},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0},
                                {0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0},
                                {0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0}
                                };
    int res = sol.maxAreaOfIsland(grid);
    cout << res << endl;
    return 0;
}