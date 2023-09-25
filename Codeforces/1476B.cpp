#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<double> a(n);
    for (auto &var : a)
    {
        cin >> var;
    }
    ll ans = 0;
    double prv = 0;
    for (size_t i = 1; i < n; i++)
    {
        prv += a[i - 1];
        if ((a[i] / prv) > (k / 100.0))
        {
            double x = ceil(a[i] * 100.0 / k) - prv;
            // cout << a[i] / prv << " " << k / 100.0 << nl;
            // cout << x << nl;
            prv += x;
            ans += x;
        }
    }
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