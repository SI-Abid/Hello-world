#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;
    int x = 0;
    while ((x + 1) * (x + 2) / 2 <= k)
        x++;
    for (int i = 0; i < n; i++)
    {
        if (i < x)
            cout << 2;
        else if (i == x)
            cout << -2 * x + 2 * (k - x * (x + 1) / 2) - 1;
        else
            cout << -1000;
        cout << " \n"[i == n - 1];
    }
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