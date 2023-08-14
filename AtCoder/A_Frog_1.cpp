#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

vector<int> dp;
int rec(vector<int> &a, int i, int k)
{
    if (i == 0)
        return 0;

    if (dp[i] != -1)
        return dp[i];

    int ans = INT_MAX;
    for (int j = 1; j <= k; j++)
    {
        if (i - j >= 0)
        {
            int temp = rec(a, i - j, k) + abs(a[i] - a[i - j]);
            ans = min(ans, temp);
        }
        else
            break;
    }
    return dp[i] = ans;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    dp.resize(n, -1);
    cout << rec(a, n - 1, 2);
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