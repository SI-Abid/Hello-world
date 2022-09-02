#include <bits/stdc++.h>
using namespace std;

int dx[] = {0, 0, 1, -1, 1, 1, -1, -1};
int dy[] = {1, -1, 0, 0, 1, -1, 1, -1};

void dfs(vector<vector<char>> &g, vector<vector<bool>> &vis, int x, int y, int &cnt)
{
    vis[x][y] = true;
    cnt++;
    for (int i = 0; i < 8; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx >= 0 and nx < g.size() and ny >= 0 and ny < g[0].size() and !vis[nx][ny])
        {
            vis[nx][ny] = true;
            if (g[nx][ny] == '*')
                dfs(g, vis, nx, ny, cnt);
        }
    }
}

int main()
{
    int t;
    cin >> t;
    for (int tc = 1; tc <= t; tc++)
    {
        int n, m;
        cin >> n >> m;
        bool shaped = true;
        vector<vector<char>> v(n, vector<char>(m));
        vector<vector<bool>> vis(n, vector<bool>(m, false));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> v[i][j];
            }
        }
        for (int i = 0; i < n and shaped; i++)
        {
            for (int j = 0; j < m and shaped; j++)
            {
                if (v[i][j] == '*' and !vis[i][j])
                {
                    int cnt = 0;
                    dfs(v, vis, i, j, cnt);
                    cout<<cnt<<' ';
                    if (cnt != 3)
                        shaped = false;
                }
            }
        }
        if (shaped)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}