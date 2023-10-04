#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (auto &x : a)
        cin >> x;
    ll ans = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        a[i] = max(a[i], 0LL);
        ans += a[i] / k;
        a[i] %= k;
        if (a[i])
        {
            ans++;
            if (i > 0)
                a[i - 1] -= k - a[i];
        }
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