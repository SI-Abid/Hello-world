#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    map<ll, ll> mp;
    for (auto x : a)
    {
        cin >> x;
        mp[x]++;
    }
    int q;
    cin >> q;
    while (q--)
    {
        ll x, y;
        cin >> x >> y;
        auto ans = [&]() -> ll
        {
            ll lowroot = x * x - 4 * y;
            if (lowroot < 0)
                return 0;
            ll s = round(sqrtl(lowroot));
            if (s * s != lowroot)
                return 0;
            ll add = x + s;
            if (add % 2 != 0)
                return 0;
            ll a = add / 2;
            ll b = (x - s) / 2;
            if (a == b)
                return mp[a] * (mp[a] - 1) / 2;
            else
                return mp[a] * mp[b];
        }();
        cout << ans << " \n"[q == 0];
    }
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