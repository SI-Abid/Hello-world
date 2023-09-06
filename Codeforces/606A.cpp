#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int a, b, c, x, y, z;
    cin >> a >> b >> c >> x >> y >> z;
    int need = max(0, x - a);
    need += max(0, y - b);
    need += max(0, z - c);
    need -= max(0, a - x) / 2;
    need -= max(0, b - y) / 2;
    need -= max(0, c - z) / 2;
    puts((need > 0 ? "No" : "Yes"));
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