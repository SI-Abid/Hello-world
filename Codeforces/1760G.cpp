#include <bits/stdc++.h>
using namespace std;
/*
If there are any nodes which can be visited from a and b and the value is same
*/
signed main()
{
    int _;
    cin >> _;
    for (int tc = 1; tc <= _; tc++)
    {
        int n, a, b;
        cin >> n >> a >> b;
        a--;
        b--;
        vector<vector<pair<int, int>>> adj(n);
        for (int i = 1; i < n; i++)
        {
            int u, v, w;
            cin >> u >> v >> w;
            u--;
            v--;
            adj[u].push_back({v, w});
            adj[v].push_back({u, w});
        }
        // vector<bool> vis(n+1,false);
        set<int> s;
        function<void(int, int, int)> dfs1 = [&](int u, int p, int x)
        {
            // vis[u]=true;
            if (u == b)
                return;
            s.insert(x);
            for (auto [v, w] : adj[u])
            {
                if (v != p)
                    dfs1(v, u, x ^ w);
            }
        };
        function<bool(int, int, int)> dfs2 = [&](int u, int p, int x)
        {
            // vis[u]=true;
            if (u != b and s.count(x))
                return true;
            for (auto [v, w] : adj[u])
            {
                if (v != p and dfs2(v, u, x ^ w))
                    return true;
            }
            return false;
        };
        dfs1(a, -1, 0);
        // fill(vis.begin(),vis.end(),false);
        if (dfs2(b, -1, 0))
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}