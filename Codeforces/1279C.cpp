#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[a[i]] = i;
    }
    int max_loc = -1;
    ll ans = 0;
    for (int i = 0; i < m; i++)
    {
        int loc = mp[b[i]];
        if (loc <= max_loc)
        {
            ans++;
            continue;
        }
        max_loc = loc;
        int pre = loc - i;
        ans += pre + pre + 1;
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