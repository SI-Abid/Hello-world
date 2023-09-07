#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

ll sumnr(ll n, ll r)
{
    return (n * (n + 1) / 2) - (r * (r + 1) / 2);
}

void solve()
{
    ll n, x, y;
    cin >> n >> x >> y;
    ll plus = n / x;
    ll minus = n / y;
    ll lcm = (x * y) / __gcd(x, y);
    plus -= n / lcm;
    minus -= n / lcm;
    ll ans = 0;
    // cout<<plus<<" "<<minus<<nl;
    ans += sumnr(n, n - plus);
    ans -= sumnr(minus, 0);
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