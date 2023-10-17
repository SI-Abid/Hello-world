#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<vector<int>> a(k + 1);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[x].emplace_back(i + 1);
    }
    vector<int> ans(k + 1);
    int l = n, r = 1;
    for (int i = k; i > 0; i--)
    {
        if (a[i].empty())
        {
            ans[i] = 0;
            continue;
        }
        for (auto x : a[i])
        {
            l = min(l, x);
            r = max(r, x);
        }
        ans[i] = (r - l + 1) * 2;
    }
    ans.erase(ans.begin());
    for (auto x : ans)
        cout << x << " ";
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