#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n, u, v;
    cin >> n >> u >> v;
    set<int> a;
    while (n--)
    {
        int x;
        cin >> x;
        a.insert(x);
    }
    if (a.size() == 1)
        cout << u + v << nl;
    else
        cout << min(u, v) << nl;
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