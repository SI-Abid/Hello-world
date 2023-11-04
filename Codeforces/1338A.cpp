#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;
    int ans = 0;
    int mx = -(1e9 + 5);
    for (auto x : a)
    {
        ans = max(ans, mx - x);
        mx = max(mx, x);
    }
    if (ans == 0)
        puts("0");
    else
        cout << 32 - __builtin_clz(ans) << nl;
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