#include <bits/stdc++.h>
using namespace std;

void dfs(int u, vector<vector<int>> &edges, vector<long long> &leaf, vector<bool> &vis)
{
    vis[u] = true;
    for (auto v : edges[u])
    {
        if (!vis[v])
        {
            if (edges[v].size() == 1)
                leaf[v] = 1;
            dfs(v, edges, leaf, vis);
            leaf[u] += leaf[v];
        }
    }
}

signed main()
{
    int _;
    cin >> _;
    for (int tc = 1; tc <= _; tc++)
    {
        // printf("Case %d: ",tc);

        int n;
        cin >> n;
        vector<vector<int>> edges(n + 1);
        for (int i = 1; i < n; i++)
        {
            int u, v;
            cin >> u >> v;
            edges[u].push_back(v);
            edges[v].push_back(u);
        }
        vector<long long> leaf(n + 1, 0);
        vector<bool> vis(n + 1, false);
        dfs(1, edges, leaf, vis);

        int q;
        cin >> q;
        while (q--)
        {
            int u, v;
            cin >> u >> v;
            cout << leaf[u] * leaf[v] << '\n';
        }
    }
    return 0;
}