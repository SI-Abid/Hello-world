#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    ll a, b, x, y, n;
    cin >> a >> b >> x >> y >> n;
    ll a1 = a - min(a - x, n);
    ll b1 = b - min(b - y, n - min(a - x, n));
    ll ans = a1 * b1;
    b1 = b - min(b - y, n);
    a1 = a - min(a - x, n - min(b - y, n));
    ans = min(ans, a1 * b1);
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