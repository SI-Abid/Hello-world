#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
const int mod = (1e9) + 7;
ll bigMod(ll a, ll x)
{
    long long ans = 1;

    while (x > 0)
    {
        if (x & 1)
        {
            ans = ans * a % mod;
        }
        a = a * a % mod;
        x >>= 1;
    }
    return ans;
}
void solve()
{
    int k;
    cin >> k;
    ll ans = 6;
    ans *= bigMod(4, (1LL << k) - 2);
    ans %= mod;
    cout << ans;
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