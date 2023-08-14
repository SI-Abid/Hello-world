// knapsack
#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

vector<vector<ll>> dp;

ll knapsack(vector<ll> &wt, vector<ll> &val, int n, int w)
{
    if (n == 0 or w == 0)
        return 0;

    if (dp[n][w] != -1)
        return dp[n][w];

    if (wt[n - 1] <= w)
        return dp[n][w] = max(val[n - 1] + knapsack(wt, val, n - 1, w - wt[n - 1]), knapsack(wt, val, n - 1, w));

    return dp[n][w] = knapsack(wt, val, n - 1, w);
}

void solve()
{
    int n, w;
    cin >> n >> w;
    vector<ll> wt(n), val(n);
    for (int i = 0; i < n; i++)
        cin >> wt[i] >> val[i];

    dp.resize(n + 1, vector<ll>(w + 1, -1));
    cout << knapsack(wt, val, n, w);
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