#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n, _;
    cin >> n >> _;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;
    vector<vector<ll>> dp(n + 1, vector<ll>(2, 0));
    for (int i = 0; i < n; i++)
    {
        dp[i + 1][0] = max(dp[i][0], dp[i][1] + a[i]);
        dp[i + 1][1] = max(dp[i][1], dp[i][0] - a[i]);
    }
    cout << max(dp[n][0], dp[n][1]) << nl;
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