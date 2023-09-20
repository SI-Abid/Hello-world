#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    int mn = 1e9, mx = 0;
    for (size_t i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        mx = max(x, mx);
        mn = min(mn, y);
    }
    cout << max(0, mx - mn) << nl;
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