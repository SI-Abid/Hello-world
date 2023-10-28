#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

ll a(ll n)
{
    ll ret = 0;
    for (int x = 0; x <= 2; x++)
    {
        ll low = 0;
        ll high = (ll)2e9;
        while (low < high)
        {
            ll mid = (low + high + 1) >> 1;
            if (mid * (mid + x) > n)
            {
                high = mid - 1;
            }
            else
            {
                low = mid;
            }
        }
        ret += low;
    }
    return ret;
}

void solve()
{
    ll l, r;
    cin >> l >> r;
    cout << a(r) - a(l - 1) << nl;
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