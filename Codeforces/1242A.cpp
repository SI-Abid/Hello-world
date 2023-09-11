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
        cout << 1;
        return;
    }
    vector<ll> p;
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            p.push_back(i);
            do
            {
                n /= i;
            } while (n % i == 0);
        }
    }
    if (n > 1)
        p.push_back(n);
    if (p.size() > 1)
        cout << 1;
    else
        cout << p[0];
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