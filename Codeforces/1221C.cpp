#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int c, m, x;
    cin >> c >> m >> x;
    int ans = min({c, m, x});
    c -= ans, m -= ans, x -= ans;
    ans += min({c, m, (c + m + x) / 3});
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