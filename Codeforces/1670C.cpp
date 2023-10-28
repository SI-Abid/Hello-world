#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
const int p = 1e9 + 7;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    vector<int> c(n);
    vector<int> t(n + 1, 0);
    vector<bool> h(n + 1, false);
    vector<bool> used(n + 1, false);
    for (auto &x : a)
        cin >> x;
    for (auto &x : b)
        cin >> x;
    for (auto &x : c)
        cin >> x;
    for (int i = 0; i < n; i++)
    {
        t[a[i]] = b[i];
        if (c[i] != 0)
            h[a[i]] = 1;
    }
    int ans = 1;
    for (int i = 1; i <= n; ++i)
    {
        if (!used[i])
        {
            vector<int> v;
            int cur = t[i];
            while (true)
            {
                v.push_back(cur);
                if (cur == i)
                    break;
                cur = t[cur];
            }
            for (auto h : v)
                used[h] = true;
            bool ok = (v.size() != 1);
            for (auto x : v)
            {
                ok = (ok && !h[x]);
            }
            if (ok)
            {
                ans *= 2;
                if (ans >= p)
                    ans -= p;
            }
        }
    }
    cout << ans << nl;
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