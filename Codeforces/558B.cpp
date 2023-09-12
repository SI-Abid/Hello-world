#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    map<int, int> m;
    vector<pair<int, int>> range(1000001, {0, 0});
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        m[x]++;
        if (m[x] > 1)
        {
            range[x].second = i + 1;
        }
        else
        {
            range[x] = {i + 1, i + 1};
        }
    }
    int ans = 0;
    int x, y;
    int size = n;
    for (auto [k, v] : m)
    {
        int xx = range[k].first;
        int yy = range[k].second;
        int sz = yy - xx;
        if (v >= ans)
        {
            if (v > ans)
            {
                x = xx, y = yy, size = sz;
            }
            else if (sz < size)
            {
                x = xx, y = yy, size = sz;
            }
            ans = v;
        }
    }
    cout << x << " " << y << nl;
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