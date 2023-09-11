#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
const int mod = 1e9 + 7;
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n + 1);
    vector<vector<int>> dp(n + 1, vector<int>(64, 0));
    for (size_t i = 1; i < n + 1; i++)
    {
        cin >> a[i];
        for (int mask = 0; mask < 64; mask++)
        {
            dp[i][mask] += dp[i - 1][mask];
            dp[i][mask] %= mod;
            dp[i][mask & a[i]] += dp[i - 1][mask];
            dp[i][mask & a[i]] %= mod;
        }
        dp[i][a[i]] = (dp[i][a[i]] + 1) % mod;
    }
    int cnt = 0;
    for (int i = 0; i < 64; i++)
    {
        if (__builtin_popcount(i) == k)
            cnt = (cnt + dp[n][i]) % mod;
    }
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