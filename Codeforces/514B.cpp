#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n, x, y;
    cin >> n >> x >> y;
    set<double> slope;
    while (n--)
    {
        int u, v;
        cin >> u >> v;
        if (x - u == 0 && y - v == 0)
        {
            slope.insert(0);
        }
        else if (y - v == 0)
        {
            slope.insert(-INFINITY);
        }
        else if (x - u == 0)
        {
            slope.insert(INFINITY);
        }
        else
        {
            double dhal = (double)(v - y) / (u - x);
            slope.insert(dhal);
        }
    }
    cout << slope.size() << nl;
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