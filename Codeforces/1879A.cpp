#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> vp(n);
    for (auto &[x, y] : vp)
        cin >> x >> y;
    pair<int, int> po = vp[0];
    sort(vp.begin(), vp.end());
    auto it = lower_bound(vp.begin(), vp.end(), po);
    it++;

    while (it != vp.end())
    {
        if (it->second >= po.second)
        {
            puts("-1");
            return;
        }
        it++;
    }
    cout << po.first << nl;
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