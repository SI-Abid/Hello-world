#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    ll n, m;
    cin >> n >> m;
    if ((n << 32) % m != 0)
    {
        puts("-1");
        return;
    }
    ll ans = 0;
    map<ll, int> mp;
    while (n % m)
    {
        n %= m;
        if (mp[n])
        {
            puts("-1");
            return;
        }
        mp[n]++;
        ans += n;
        n <<= 1;
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