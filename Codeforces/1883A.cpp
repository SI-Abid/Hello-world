#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    string s;
    cin >> s;
    int ans = 0;
    int cur = 1;
    for (auto c : s)
    {
        int x = c - '0';
        if (x == 0 and cur != 0)
        {
            ans += abs(11-cur);
        }
        else if (cur == 0 and x != 0)
        {
            ans += abs(11-x);
        }
        else
        {
            ans += abs(cur - x)+1;
        }
        // cout<<ans<<" | ";
        cur = x;
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