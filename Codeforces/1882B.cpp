#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    set<int> s;
    vector<set<int>> vs(n);
    for (size_t i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        while (x--)
        {
            int y;
            cin >> y;
            vs[i].insert(y);
            s.insert(y);
        }
    }
    if (n == 1)
    {
        puts("0");
        return;
    }
    int ans = 0;
    for (auto y : s)
    {
        set<int> xx;
        for (int j = 0; j < n; j++)
        {
            if (vs[j].find(y) != vs[j].end())
                continue;
            for (auto x : vs[j])
                xx.insert(x);
        }
        ans = max(ans, int(xx.size()));
    }
    cout << ans << nl;
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