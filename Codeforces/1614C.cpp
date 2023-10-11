#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

const int mod = 1e9 + 1;

void solve()
{
    int n, m, v = 0;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x >> x >> x;
        v or_eq x;
    }
    int pw = 1;
    for (int i = 0; i < m; i++)
    {
        pw = (2LL * pw) % mod;
    }
    ll sum = 0;
    for (int i = 0; i < 30; i++)
    {
        if (v >> i & 1)
        {
            sum = (sum + (1LL << i) * pw) % mod;
        }
    }
    cout << sum << nl;
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