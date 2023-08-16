#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

ll sumo(ll n)
{
    return (n * (n + 1) * (2 * n + 1)) / 6;
}

ll sub(ll a, ll b)
{
    ll ans = 0;
    ll mx = 0;
    while (a < b)
    {
        ans += 2 * (a * b);
        a++;
        b--;
        mx=max(mx,a*b);
    }
    if (a == b)
        ans += (a * b);
    return ans-mx;
}

void solve()
{
    ll n;
    cin >> n;
    ll i = 1;
    ll ans = sumo(n - i);
    while (true)
    {
        i++;
        ll x = sumo(n - i) + sub(n - i + 1, n);
        if (x > ans)
        {
            ans = x;
        }
        else
            break;
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