#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    ll n, x;
    cin >> n >> x;
    vector<ll> f(60);
    for (int i = 0; i < 60; i++)
    {
        if (~n >> i & 1)
        {
            f[i] = n;
        }
        else
        {
            f[i] = (n & ~((1LL << i) - 1)) + (1LL << i);
        }
    }
    ll m = n;
    for (int i = 0; i < 60; i++)
    {
        if (~x >> i & 1)
        {
            m = max(m, f[i]);
        }
    }
    for (int i = 0; i < 60; i++)
    {
        if (x >> i & 1)
        {
            if (m >= f[i])
            {
                puts("-1");
                return;
            }
        }
    }
    cout << m << nl;
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