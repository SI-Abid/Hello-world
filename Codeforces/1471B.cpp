#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

ll solve()
{
    int n, x;
    cin >> n >> x;
    vector<pair<ll, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        int q;
        cin >> q;
        a[i] = {q, 1};
    }
    ll ans = 0;
    while (true)
    {
        vector<pair<ll, int>> tmp;
        bool ok = true;
        for (auto [u, v] : a)
        {
            ans += (u * v);
            if (ok and u % x == 0)
            {
                tmp.push_back({u / x, v * x});
            }
            else
            {
                ok = false;
            }
        }
        if (!ok)
        {
            for (auto [u, v] : tmp)
                ans += (u * v);
            return ans;
        }
        a = tmp;
    }
}

signed main()
{
    int _(1);
    cin >> _;
    for (int tc = 1; tc <= _; tc++)
    {
        // printf("Case %d: ",tc);
        cout << solve() << nl;
    }
    return 0;
}