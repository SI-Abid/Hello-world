#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> d(n);
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        d[i] = a - b;
        ans += 1LL * n * b - a;
    }
    sort(d.rbegin(), d.rend());
    for (int i = 0; i < n; i++)
    {
        ans += 1LL * (i + 1) * d[i];
    }
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