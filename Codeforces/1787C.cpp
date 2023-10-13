#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n, s;
    cin >> n >> s;
    vector<pair<ll, ll>> a(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x >= 2 * s)
        {
            a[i] = {x - s, s};
        }
        else
        {
            a[i] = {x - min(s, x), min(s, x)};
        }
    }
    vector<vector<ll>> dp(n + 1, vector<ll>(2));
    dp[1][0] = (a[0].first + a[0].second) * a[1].first;
    dp[1][1] = (a[0].first + a[0].second) * a[1].second;
    for (int i = 2; i < n; i++)
    {
        dp[i][0] = min(dp[i - 1][0] + a[i - 1].second * a[i].first, dp[i - 1][1] + a[i - 1].first * a[i].first);
        dp[i][1] = min(dp[i - 1][0] + a[i - 1].second * a[i].second, dp[i - 1][1] + a[i - 1].first * a[i].second);
    }
    cout << min(dp[n - 2][0] + a[n - 2].second * (a[n - 1].first + a[n - 1].second), dp[n - 2][1] + a[n - 2].first * (a[n - 1].first + a[n - 1].second)) << "\n";
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