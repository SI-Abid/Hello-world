#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

ll ap(ll a, ll b)
{
    return (b + a) * (abs(b - a) + 1) / 2;
}

void solve()
{
    ll k, x;
    cin >> k >> x;
    ll tv = 0;
    ll fv = 2 * k;
    while (fv - tv > 1)
    {
        ll mid = (fv + tv) / 2;
        ll cnt;
        if (mid <= k)
        {
            cnt = ap(1, mid);
        }
        else
        {
            cnt = ap(1, k) + ap(k - 1, 2 * k - mid);
        }
        if (cnt < x)
        {
            tv = mid;
        }
        else
        {
            fv = mid;
        }
    }
    if (tv < 2 * k - 1)
    {
        tv++;
    }
    cout << tv << nl;
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