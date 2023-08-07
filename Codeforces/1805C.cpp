#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<ll> k(n);
    ll mn, mx;
    mn = 1e9;
    mx = -1e9;
    for (int i = 0; i < n; i++)
    {
        cin >> k[i];
        mn = k[i] > 0 ? min(mn, k[i]) : mn;
        mx = k[i] < 0 ? max(mx, k[i]) : mx;
    }
    sort(k.begin(), k.end());
    while (m--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        int idx = lower_bound(k.begin(), k.end(), b) - k.begin();
        if (idx >= 0 and idx < n and (b - k[idx]) * (b - k[idx]) < 4 * a * c)
        {
            cout << "YES\n";
            cout << k[idx] << nl;
            continue;
        }
        idx--;
        if (idx >= 0 and idx < n and (b - k[idx]) * (b - k[idx]) < 4 * a * c)
        {
            cout << "YES\n";
            cout << k[idx] << nl;
            continue;
        }
        cout << "NO\n";
        continue;
    }
    cout << nl;
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