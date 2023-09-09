#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    cout << (n+1)*3+1 << nl;
    for (int i = 0; i <= n; i++)
    {
        cout << i << ' ' << i << nl;
        cout << i + 1 << ' ' << i << nl;
        cout << i << ' ' << i + 1 << nl;
    }
    cout << n + 1 << ' ' << n + 1;
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