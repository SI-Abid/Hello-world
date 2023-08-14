#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    vector<int> v(14);
    for (auto &x : v)
        cin >> x;
    ll ans = 0;
    for (int i = 0; i < 14; i++)
    {
        int x = v[i];
        if (x == 0)
            continue;
        int d = x / 14;
        int r = x % 14;
        // int sign = d%2==0?1:-1;
        ll sum = 0;
        for (int j = 0; j < 14; j++)
        {
            if (j == i)
            {
                sum += d % 2 == 0 ? d : 0;
                continue;
            }
            sum += (v[j] + d) % 2 == 0 ? v[j] + d : 0;
        }
        d++;

        for (int j = i + 1; j < i + r + 1; j++)
        {
            sum += (v[j % 14] + d) % 2 == 0 ? v[j % 14] + d : -(v[j % 14] + d - 1);
        }
        ans = max(ans, sum);
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