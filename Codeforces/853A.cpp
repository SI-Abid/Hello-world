#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> ans(n);
    set<int> s;
    priority_queue<pair<int, int>> pq;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        pq.push({x, i + 1});
        s.insert(k + i + 1);
    }
    ll cost = 0;
    int mn = k + 1;
    while (pq.size())
    {
        auto [u, v] = pq.top();
        pq.pop();
        int t = max(k + 1, v);
        int x = *s.lower_bound(t);
        ans[v - 1] = x;
        cost += 1LL * u * (x - v);
        s.erase(x);
    }
    cout << cost << nl;
    for (auto x : ans)
        cout << x << " ";
    cout << nl;
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