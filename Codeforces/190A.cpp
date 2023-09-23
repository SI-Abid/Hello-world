#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n, m;
    cin >> n >> m;
    if (n == 0 and m > 0)
    {
        puts("Impossible");
        return;
    }
    int a = n, b = n;
    if (m > 0)
    {
        if (n <= m)
        {
            a += m - n;
        }
        b += m - 1;
    }
    cout << a << " " << b << nl;
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