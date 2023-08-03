#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n, d, h;
    cin >> n >> d >> h;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    double area = 1LL * d * h / 2.0;
    double ans = area;
    for (int i = 1; i < n; i++)
    {
        if (a[i] < a[i - 1] + h)
        {
            double hh = a[i - 1] + h - a[i];
            double b = d * (hh / h);
            ans -= b * hh / 2.0;
        }
        ans += area;
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