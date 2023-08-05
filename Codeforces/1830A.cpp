#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    map<pair<int, int>, int> mp;
    int cnt = 1;
    vector<vector<int>> adj(n + 1);
    for (int i = 1; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        mp[{x, y}] = mp[{y, x}] = cnt++;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    vector<int> dp(n + 1, 0), idx(n + 1, 0), vis(n + 1, 0);
    dp[1] = 1;
    idx[1] = 0;
    vis[1] = 1;
    function<void(int)> dfs = [&](int u)
    {
        for (int v : adj[u])
        {
            if (!vis[v])
            {
                vis[v] = 1;
                if (mp[{u, v}] < idx[u])
                    dp[v] = dp[u] + 1;
                else
                    dp[v] = dp[u];
                idx[v] = mp[{u, v}];
                dfs(v);
            }
        }
    };
    dfs(1);
    cnt = *max_element(dp.begin(), dp.end());
    cout << cnt << nl;
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