#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;
    vector<int> dp(n + 1, -1e9);
    dp[0] = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += a[j];
            dp[j - i + 1] = max(sum, dp[j - i + 1]);
        }
    }
    vector<int> ans(n + 1, 0);
    for (int i = 0; i < n + 1; i++)
    {
        int score = 0;
        for (int j = 0; j < n + 1; j++)
        {
            score = max(score, dp[j] + min(i, j) * k);
        }
        ans[i] = score;
    }
    for (auto x : ans)
        cout << x << ' ';
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