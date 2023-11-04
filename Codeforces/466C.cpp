#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    for (auto &x : a)
        cin >> x;
    for (int i = 1; i < n; i++)
    {
        a[i] += a[i - 1];
    }
    if (a.back() % 3 != 0)
    {
        puts("0");
        return;
    }
    ll u = a.back() / 3;
    ll v = 2 * u;
    ll ans = 0;
    ll cnt = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == v)
            ans += cnt;
        if (a[i] == u)
            cnt++;
    }
    cout << ans << nl;
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