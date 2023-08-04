#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a)
        cin >> x;
    map<int, ll> mp;
    for (int i = 0; i < n; i++)
    {
        mp[a[i] - i]++;
    }
    ll ans = 0;
    for (auto x : mp)
    {
        ans += (x.second * (x.second - 1)) / 2;
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