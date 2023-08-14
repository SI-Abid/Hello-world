// knapsack
#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n, w;
    cin >> n >> w;
    vector<int> weight(n), value(n);
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> weight[i] >> value[i];
        total += value[i];
    }
    vector<ll> dp(total + 1, INT_MAX);
    dp[0] = 0;
    for (int i = 0; i < n; i++)
    {
        for (int val = total - value[i]; val >= 0; val--)
        {
            dp[val + value[i]] = min(dp[val + value[i]], dp[val] + weight[i]);
        }
    }
    ll ans = 0;
    for (int i = 0; i <= total; i++)
    {
        if (dp[i] <= w)
        {
            ans = max(ans, (ll)i);
        }
    }
    cout << ans << nl;
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