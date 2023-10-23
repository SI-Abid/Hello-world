#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
const int MOD = 1e9 + 7;
ll expo(ll a, ll n)
{
    if (n == 0)
        return 1;
    if (n & 1)
        return (a * expo(a, n - 1)) % MOD;
    ll ret = expo(a, n / 2);
    return (ret * ret) % MOD;
}
int dfs(int u, vector<vector<int>> &adj, vector<bool> &vis)
{
    vis[u] = true;
    ll ret = 1;
    for (auto v : adj[u])
        if (!vis[v])
            ret += dfs(v, adj, vis);
    return ret;
}
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<vector<int>> adj(n + 1);
    vector<bool> vis(n + 1, false);
    for (int i = 1; i < n; i++)
    {
        int x, y, t;
        cin >> x >> y >> t;
        if (t == 0)
        {
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
    }
    ll res = expo(n, k);
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            res -= expo(dfs(i, adj, vis), k);
            if (res < 0)
                res += MOD;
        }
    }
    cout << res << nl;
}

signed main()
{
    int _(1);
    // cin >> _;
    for (int tc = 1; tc <= _; tc++)
    {
        // printf("Case %d: ",tc);
        solve();
    }
    return 0;
}