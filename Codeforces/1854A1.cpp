#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;

    int extreme = 0;

    for (int i = 0; i < n; i++)
        if (abs(a[i]) > abs(a[extreme]))
            extreme = i;

    if (a[extreme] == 0)
    {
        cout << 0 << '\n';
        return;
    }

    vector<pair<int, int>> ans;
    if (a[extreme] > 0)
    {
        ans.push_back({1, extreme + 1});
        ans.push_back({1, extreme + 1});

        for (int i = 1; i < n; i++)
        {
            ans.push_back({i + 1, i});
            ans.push_back({i + 1, i});
        }
    }
    else
    {
        ans.push_back({n, extreme + 1});
        ans.push_back({n, extreme + 1});

        for (int i = n - 1; i > 0; i--)
        {
            ans.push_back({i, i + 1});
            ans.push_back({i, i + 1});
        }
    }
    cout << ans.size() << nl;
    for (auto [f, s] : ans)
    {
        cout << f << " " << s << nl;
    }
    // cout << nl;
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