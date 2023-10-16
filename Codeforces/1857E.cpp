#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (auto &x : a)
        cin >> x;
    vector<ll> sorted=a;
    vector<ll> pre(n + 1, 0);
    sort(sorted.begin(), sorted.end());
    for (int i = 0; i < n; i++)
    {
        pre[i + 1] = pre[i] + sorted[i];
    }
    vector<ll> ans(n);
    for (int i = 0; i < n; i++)
    {
        ll x = a[i];
        ll idx = lower_bound(sorted.begin(), sorted.end(), x) - sorted.begin();
        ans[i] = idx * x - pre[idx] + (pre[n] - pre[idx]) - (n - idx) * x + n;
    }
    for (auto x : ans)
        cout << x << " ";
    cout << nl;
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