#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int b, g;
    cin >> b >> g;
    if (b > g)
    {
        for (int i = 0; i < min(b, g); i++)
        {
            cout << "BG";
        }
        for (int i = 0; i < b - g; i++)
        {
            cout << "B";
        }
    }
    else
    {
        for (int i = 0; i < min(b, g); i++)
        {
            cout << "GB";
        }
        for (int i = 0; i < g - b; i++)
        {
            cout << "G";
        }
    }
    cout << nl;
}

signed main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int _(1);
    // cin >> _;
    for (int tc = 1; tc <= _; tc++)
    {
        // printf("Case %d: ",tc);
        solve();
    }
    return 0;
}