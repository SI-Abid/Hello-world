#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;
    int k;
    cin >> k;
    vector<int> b(k);
    for (auto &x : b)
        cin >> x;
    vector<pair<int, ll>> group;
    for (auto x : a)
    {
        int val = x;
        ll cnt = 1;
        while (val % m == 0)
        {
            val /= m;
            cnt *= m;
        }
        if (!group.empty() and group.back().first == val)
        {
            group.back().second += cnt;
        }
        else
        {
            group.push_back({val, cnt});
        }
    }
    int g = 0;
    for (auto x : b)
    {
        if (g >= group.size())
        {
            puts("No");
            return;
        }
        int val = x;
        ll cnt = 1;
        while (val % m == 0)
        {
            val /= m;
            cnt *= m;
        }
        if (val != group[g].first or cnt > group[g].second)
        {
            puts("No");
            return;
        }
        group[g].second -= cnt;
        if (group[g].second == 0)
            g++;
    }
    puts(g == group.size() ? "Yes" : "No");
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