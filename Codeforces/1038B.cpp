#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    if (n % 2 == 0 or (n & 1 and (n + 1) % 4 == 0))
    {
        cout << "Yes\n";
        cout << n / 2;
        for (int i = 2; i <= n; i += 2)
            cout << ' ' << i;
        cout << nl << (n + 1) / 2;
        for (int i = 1; i <= n; i += 2)
            cout << ' ' << i;
    }
    else
        cout << "No";
    // cout << nl;
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