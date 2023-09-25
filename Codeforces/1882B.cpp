#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    // map<int, int> s;
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
            // s[y]++;
        }
    }
    if (n == 1)
    {
        puts("0");
        return;
    }
    int ans = 0;
    for (size_t i = 0; i < n; i++)
    {
        set<int> xx;
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                continue;
            for (auto x : vs[j])
                xx.insert(x);
        }
        ans = max(ans, int(xx.size()));
    }

    if (ans > 0)
        ans--;
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