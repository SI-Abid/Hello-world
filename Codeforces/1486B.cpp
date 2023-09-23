#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<ll> x(n), y(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }
    if (n & 1)
    {
        cout << 1 << nl;
        return;
    }
    sort(x.begin(), x.end());
    sort(y.begin(), y.end());
    cout << (x[n / 2] - x[n / 2 - 1] + 1) * (y[n / 2] - y[n / 2 - 1] + 1) << nl;
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