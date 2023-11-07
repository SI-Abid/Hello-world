#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<string> v(n);
    for (auto &s : v)
    {
        cin >> s;
        s = "#" + s;
    }
    int ans = 0;
    vector<bool> check(n, false);
    for (int i = 1; i <= m; i++)
    {
        bool ok = false;
        for (int j = 0; j < n - 1; j++)
        {
            if (!check[j] and v[j][i] > v[j + 1][i])
            {
                ok = true;
                break;
            }
        }
        ans += ok;
        if (!ok)
        {
            for (int j = 0; j < n - 1; j++)
            {
                if (v[j][i] < v[j + 1][i])
                {
                    check[j] = true;
                }
            }
        }
    }
    cout << ans << nl;
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