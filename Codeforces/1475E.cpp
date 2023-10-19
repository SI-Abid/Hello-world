#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

const int mod = 1e9 + 7;

ll nCr(ll n, ll r)
{
    if (r == 0 || r == n)
    {
        return 1;
    }

    vector<vector<ll>> dp(n + 1, vector<ll>(r + 1, 0));
    for (ll i = 0; i <= n; i++)
    {
        for (int j = 0; j <= min(i, r); j++)
        {
            if (j == 0 || j == i)
            {
                dp[i][j] = 1;
            }
            else
            {
                dp[i][j] = (dp[i - 1][j] + dp[i - 1][j - 1]) % mod;
            }
        }
    }

    return dp[n][r];
}

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> A(n);
    for (auto &a : A)
        cin >> a;

    sort(A.rbegin(), A.rend());

    if (k >= n or A[k] != A[k - 1])
    {
        puts("1");
        return;
    }
    int start = k;
    int end = k + 1;
    while (start > 0 and A[start - 1] == A[start])
        start--;
    while (end < n and A[end - 1] == A[end])
        end++;

    ll N = end - start;
    ll R = k - start;

    cout << nCr(N, R) << nl;
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