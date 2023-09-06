#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void dfs(int u, int cost, vector<vector<int>> &adj, map<pair<int, int>, int> &p)
{
    // vis[u] = true;
    for (int v : adj[u])
    {
        if (p.find({u, v}) == p.end()) // this edge is not visited
        {
            p[{u, v}] = p[{v, u}] = cost;
            dfs(v, cost ^ 1, adj, p);
        }
    }
}

void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> adj(n + 1);
    vector<pair<int, int>> edge;
    for (size_t i = 0; i < n - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        edge.push_back({a, b});
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int start;
    for (int i = 0; i < n; i++)
    {
        if (adj[i + 1].size() > 2)
        {
            puts("-1");
            return;
        }
        if (adj[i + 1].size() == 1)
            start = i + 1;
    }
    map<pair<int, int>, int> p;
    dfs(start, 2, adj, p);
    for (auto ej : edge)
    {
        cout << p[ej] << ' ';
    }
    cout << nl;
}

signed main()
{
    int _(1);
    cin >> _;
    for (int tc = 1; tc <= _; tc++)
    {
        // printf("Case %d: ",tc);
        solve();
    }
    return 0;
}