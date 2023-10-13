#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int flag, cnt, tmp, res;
    flag = cnt = tmp = 0;
    map<int, int> mp1, mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp1[a[i]] = 1 + mp1[a[i] - 1];
        mp[a[i]] = i;
    }
    res = INT_MAX;
    for (int i = n - 1; i >= 0; i--)
    {
        res = min(res, max(a[i] - mp1[a[i]], n - a[i]));
    }
    cout << res << nl;
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