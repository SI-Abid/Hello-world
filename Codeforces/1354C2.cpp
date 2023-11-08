#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

#define PI acos(-1)

void solve()
{
    int n;
    cin >> n;
    // n++;
    double ans = 0.5 / (sin(PI / (4 * n)));
    cout << fixed << setprecision(10) << ans << nl;
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