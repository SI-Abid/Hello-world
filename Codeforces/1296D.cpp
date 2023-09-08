#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    ll n, a, b, k;
    cin >> n >> a >> b >> k;
    ll ans = 0;
    vector<ll> skip(n);
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        x %= (a + b);
        if (x == 0)
            x = a + b;
        if (x <= a)
            skip[i] = 0;
        else
            skip[i] = (x - 1) / a;
    }
    sort(skip.begin(), skip.end());
    for (auto x : skip)
    {
        if (x > k)
            break;
        ans++;
        k -= x;
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