#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (auto &var : a)
    {
        cin >> var;
    }
    sort(a.begin(), a.end());
    int mid = n / 2;
    ll cur = a[mid];
    for (int i = mid + 1; i <= n; i++)
    {
        ll gap = i == n ? LONG_MAX : a[i] - cur;
        ll add = min(k / (i - mid), gap);
        cur += add;
        k -= add * (i - mid);
    }
    cout << cur << nl;
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