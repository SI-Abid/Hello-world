#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    ll n;
    cin >> n;
    if (n == 1)
    {
        cout << "1 1\n";
        return;
    }
    ll d;
    for (ll i = 1; i * i < n; i++)
    {
        if (n % i == 0 and lcm(i, n / i) == n)
        {
            d = i;
        }
    }
    cout << d << ' ' << n / d << nl;
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