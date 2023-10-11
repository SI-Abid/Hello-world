#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n, m;
    cin >> n >> m;
    cout << n * m << nl;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cout << (i or (j << 20)) << " \n"[j == m - 1];
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