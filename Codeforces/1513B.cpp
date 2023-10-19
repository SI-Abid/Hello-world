#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
const int MOD = int(1e9) + 7;
void solve()
{
    int n;
    cin >> n;
    int an = -1;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        an and_eq a[i];
    }
    ll good = count(a.begin(), a.end(), an);
    ll ans = ((good % MOD) * ((good - 1) % MOD)) % MOD;
    for (ll i = 1; i < n - 1; i++)
    {
        ans = (ans * i) % MOD;
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