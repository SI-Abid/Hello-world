#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v)
        cin >> x;
    vector<int> ans;
    ans.push_back(v[0]);
    for (int i = 1; i < n; i++)
    {
        if (v[i - 1] > v[i])
            ans.push_back(1);
        ans.push_back(v[i]);
    }
    cout << ans.size() << nl;
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