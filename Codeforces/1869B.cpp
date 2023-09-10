#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
ll cost(pair<ll, ll> a, pair<ll, ll> b)
{
    return abs(a.first - b.first) + abs(a.second - b.second);
}
void solve()
{
    int n, k, a, b;
    cin >> n >> k >> a >> b;
    vector<pair<ll, ll>> free(k), city(n);
    for (int i = 0; i < n; i++)
    {
        cin >> city[i].first >> city[i].second;
        if (i < k)
            free[i] = city[i];
    }
    if (a <= k and b <= k)
    {
        puts("0");
        return;
    }
    // sort(free.begin(), free.end());
    a--;
    b--;
    ll costa = a < k ? 0 : 1e12;
    ll costb = b < k ? 0 : 1e12;
    // cout << costa << " " << costb << nl;
    for (int i = 0; i < k; i++)
    {
        costa = min(costa, cost(city[a], free[i]));
    }
    for (int i = 0; i < k; i++)
    {
        costb = min(costb, cost(city[b], free[i]));
    }
    // cout << costa << " " << costb << nl;
    cout << min(cost(city[a], city[b]), costa + costb) << nl;
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