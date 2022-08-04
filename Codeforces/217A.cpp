#include <bits/stdc++.h>
using namespace std;

void dfs(int sx, int sy, vector<vector<int>> &x, vector<vector<int>> &y, map<pair<int, int>, bool> &vis)
{
    vis[{sx, sy}] = true;
    for (auto i : x[sx])
    {
        if (!vis[{sx, i}])
        {
            dfs(sx, i, x, y, vis);
        }
    }
    for (auto i : y[sy])
    {
        if (!vis[{i, sy}])
        {
            dfs(i, sy, x, y, vis);
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> x(1005);
    vector<vector<int>> y(1005);
    vector<pair<int, int>> xy;
    map<pair<int, int>, bool> vis;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        xy.push_back({a, b});
        vis[{a, b}] = false;
        x[a].push_back(b);
        y[b].push_back(a);
    }
    int ans = 0;
    for (auto [i,j] : xy)
    {
        if (!vis[{i,j}])
        {
            dfs(i, j, x, y, vis);
            ans++;
        }
    }
    cout << ans-1 << '\n';
    return 0;
}