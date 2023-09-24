#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    ll a = 0, b = 0, ma = INT_MAX, mb = INT_MAX;
    for (size_t i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        ma = min(ma, x);
        a += x;
    }
    for (size_t i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        mb = min(mb, x);
        b += x;
    }
    ll ans = min(n * ma + b, n * mb + a);
    cout << ans << nl;
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