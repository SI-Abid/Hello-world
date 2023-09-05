#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    ll n, a, b;
    cin >> n >> a >> b;
    for (ll i = 1; i <= n; i *= a)
    {
        if ((n - i) % b == 0)
        {
            puts("Yes");
            return;
        }
        if (a == 1)
            break;
    }

    puts("No");
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