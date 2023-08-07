#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    if (n & 1)
    {
        cout << "-1\n";
        return;
    }
    int m = n >> 1;
    if (n & m)
    {
        cout << "-1\n";
    }
    else
    {
        cout << m << ' ' << (n | m) << nl;
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