#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    ll n, k;
    cin >> n >> k;
    int t = 0, f = 0;
    ll nn = n;
    while (n % 2 == 0)
    {
        t++;
        n /= 2;
    }
    while (n % 5 == 0)
    {
        f++;
        n /= 5;
    }
    for (int i = t; i < k; i++)
    {
        nn *= 2;
    }
    for (int i = 0; i < k - f; i++)
    {
        nn *= 5;
    }
    cout << nn << nl;
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