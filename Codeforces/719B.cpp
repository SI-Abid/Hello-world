#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;
    int x, y;
    x = y = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0 and s[i] != 'r')
            x++;
        if (i % 2 == 1 and s[i] != 'b')
            y++;
    }
    ans = max(x, y);
    x = y = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 1 and s[i] != 'r')
            x++;
        if (i % 2 == 0 and s[i] != 'b')
            y++;
    }
    ans = min(ans, max(x, y));
    cout << ans << nl;
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