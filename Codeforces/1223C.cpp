#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    int a, b, x, y;
    cin >> x >> a >> y >> b;
    sort(p.rbegin(), p.rend());
    if (x < y)
    {
        swap(x, y);
        swap(a, b);
    }
    ll c = 1LL * a * b / __gcd(a, b);
    ll k;
    cin >> k;
    int l = 0;
    int r = n + 1;
    while (l < r)
    {
        int m = (l + r) / 2;
        int cxy = m / c;
        int cx = m / a - cxy;
        int cy = m / b - cxy;
        ll ans = 0;
        for (int i = 0; i < cxy; i++)
        {
            ans += p[i] / 100 * (x + y);
        }
        for (int i = cxy; i < cxy + cx; i++)
        {
            ans += p[i] / 100 * x;
        }
        for (int i = cxy + cx; i < cxy + cx + cy; i++)
        {
            ans += p[i] / 100 * y;
        }
        if (ans >= k)
            r = m;
        else
            l = m + 1;
    }
    if (l == n + 1)
        puts("-1");
    else
        cout << l << nl;
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