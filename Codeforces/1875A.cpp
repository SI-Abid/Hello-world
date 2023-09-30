#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    ll n, a, b;
    cin >> a >> b >> n;
    while (n--)
    {
        ll x;
        cin >> x;
        b += min(x, a-1);
    }
    cout << b << nl;
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