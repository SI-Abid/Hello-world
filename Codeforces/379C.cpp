#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[i] = {x, i};
    }
    sort(a.begin(), a.end());
    int cut = 0;
    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        a[i].first = max(a[i].first, cut + 1);
        cut = a[i].first;
        ans[a[i].second] = a[i].first;
    }
    for (auto x : ans)
        cout << x << ' ';
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