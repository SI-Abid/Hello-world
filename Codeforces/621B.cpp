#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    map<int, int> m, o;
    while (n--)
    {
        int x, y;
        cin >> x >> y;
        m[x + y]++;
        o[x - y + 1000]++;
    }
    ll ans = 0;
    for (auto [k, v] : m)
        ans += v * (v - 1) / 2;
    for (auto [k, v] : o)
        ans += v * (v - 1) / 2;
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