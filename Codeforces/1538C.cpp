#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    ll l, r;
    cin >> n >> l >> r;
    vector<int> a(n + 1);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int last = (1LL << 31)-1;
    a[n] = last;
    sort(a.begin(), a.end());
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        auto it = lower_bound(a.begin() + i + 1, a.end(), l - a[i]);
        auto jt = upper_bound(a.begin() + i + 1, a.end(), r - a[i]) - 1;
        if (jt == a.end())
            puts("+++");
        // cout << a[i] << " " << *it << " " << *jt << " " << (jt - it) << nl;
        if (*it + a[i] >= l and *jt + a[i] <= r)
            ans += jt - it + 1;
    }
    cout << ans << nl;
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