#include <bits/stdc++.h>
using namespace std;

signed main()
{
    freopen("buckets.in", "r", stdin);
    freopen("buckets.out", "w", stdout);
    vector<string> grid(10);
    int x, y;
    for (int i = 0; i < 10; i++)
    {
        cin >> grid[i];
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (grid[i][j] == 'B')
            {
                x = i;
                y = j;
            }
        }
    }

    vector<vector<bool>> vis(10, vector<bool>(10, false));
    vector<vector<int>> dis(10, vector<int>(10, 0));
    queue<pair<int, int>> q;
    int dx[] = {0, 0, 1, -1};
    int dy[] = {1, -1, 0, 0};
    int ans = INT_MAX;
    q.push({x, y});
    vis[x][y] = true;
    while (q.size())
    {
        auto [x, y] = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int xx = x + dx[i];
            int yy = y + dy[i];
            if (xx >= 0 and xx < 10 and yy >= 0 and yy < 10 and !vis[xx][yy] and grid[xx][yy] != 'R')
            {
                vis[xx][yy] = true;
                if (grid[xx][yy] == 'L')
                {
                    ans = min(ans, dis[x][y]);
                    continue;
                }
                dis[xx][yy] = dis[x][y] + 1;
                q.push({xx, yy});
            }
        }
    }
    cout << ans;
    return 0;
}