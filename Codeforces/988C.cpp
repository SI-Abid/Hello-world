#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    map<int, pair<int, int>> mp;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        int sum = 0;
        vector<int> a(m);
        for (int j = 0; j < m; j++)
        {
            cin >> a[j];
            sum += a[j];
        }
        for (int j = 0; j < m; j++)
        {
            if (mp.count(sum - a[j]))
            {
                puts("YES");
                cout << mp[sum - a[j]].first << " " << mp[sum - a[j]].second << nl;
                cout << i + 1 << " " << j + 1 << nl;
                return;
            }
        }
        for (int j = 0; j < m; j++)
        {
            mp[sum - a[j]] = {i + 1, j + 1};
        }
    }
    puts("NO");
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