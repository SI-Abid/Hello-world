#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n, l;
    cin >> n >> l;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;
    double lo = 0, hi = l;
    for (int it = 0; it < 100; it++)
    {
        double mid = (lo + hi) * .5;
        double total = 0;
        //
        double t = mid;
        double x = 0;
        double v = 1;
        for (int i = 0; i < n; i++)
        {
            double until = (a[i] - x) / v;
            if (until <= t)
            {
                t -= until;
                x = a[i];
                v += 1;
                continue;
            }
            break;
        }
        x += v * t;
        total += x;
        //!
        t = mid;
        x = l;
        v = 1;
        for (int i = n - 1; i >= 0; i--)
        {
            double until = (x - a[i]) / v;
            if (until <= t)
            {
                t -= until;
                x = a[i];
                v += 1;
                continue;
            }
            break;
        }
        x -= v * t;
        total += l - x;
        //!
        if (total >= l)
            hi = mid;
        else
            lo = mid;
    }
    cout << fixed << setprecision(10) << (lo + hi) * .5 << nl;
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