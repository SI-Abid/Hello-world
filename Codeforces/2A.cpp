#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    map<string, int> mp, mark;
    int mx = -1100;
    vector<pair<string, int>> v;
    for (int i = 0; i < n; i++)
    {
        string s;
        int x;
        cin >> s >> x;
        v.push_back({s, x});
        mp[s] += x;
    }
    for (auto [k, v] : mp)
    {
        if (v >= mx)
        {
            if (v > mx)
            {
                mx = v;
                mark.clear();
            }
            mark[k] = 1;
        }
    }
    int cur = 0;
    mp.clear();
    for (int i = 0; i < n; i++)
    {
        mp[v[i].first] += v[i].second;
        if (mp[v[i].first] >= mx and mark[v[i].first])
        {
            cout << v[i].first << nl;
            return;
        }
    }
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