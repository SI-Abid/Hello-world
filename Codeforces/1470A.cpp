#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> k(n), c(m);
    for (auto &a : k)
        cin >> a;
    for (auto &a : c)
        cin >> a;
    sort(k.rbegin(), k.rend());
    ll ans = 0;
    int id = 0;
    for (auto K : k)
    {
        if (id < K - 1)
            ans += c[id++];
        else
            ans += c[K - 1];
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