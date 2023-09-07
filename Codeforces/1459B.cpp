#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << (n / 2 + 1) * (n / 2 + 1) << nl;
    }
    else
    {
        cout << 2 * (n / 2 + 1) * (n / 2 + 2) << nl;
    }
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