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
    vector<ll> dir = {INT64_MAX, INT64_MAX};
    ll ans = INT64_MAX;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        dir[i % 2] = min(dir[i % 2], a[i]);
        sum += a[i];
        vector<ll> counts = {i / 2 + 1, (i + 1) / 2};
        if (i)
        {
            ll option = sum + (n - counts[0]) * dir[0] + (n - counts[1]) * dir[1];
            ans = min(ans, option);
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