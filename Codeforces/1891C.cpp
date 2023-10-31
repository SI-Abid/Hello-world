#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n);
 
    for (auto &a : a)
        cin >> a;
 
    ll s = accumulate(a.begin(), a.end(), 0LL);
    sort(a.begin(), a.end(), greater<ll>());
    vector<ll> pre(n + 1, 0);
 
    for (int i = 0; i < n; i++)
        pre[i + 1] = pre[i] + a[i];
 
    int need = 0;
 
    while (pre[need] < s / 2)
        need++;
 
    cout << (s + 1) / 2 + need << '\n';
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