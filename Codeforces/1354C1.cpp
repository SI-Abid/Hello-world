#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

#define PI acos(-1)

void solve()
{
    int n;
    cin >> n;
    double theta = 90.0 / (n/2);
    double ans = 1;
    for (double i = theta; i < 90.0; i += theta)
    {
        // cout<<i<<" "<<cos((PI*i)/180)<<nl;
        ans += 2*(cos((PI*i)/180));
    }
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