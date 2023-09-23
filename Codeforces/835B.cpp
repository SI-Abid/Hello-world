#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    int m = 0;
    for (auto c : s)
    {
        m += c - '0';
    }
    if (m >= n)
    {
        puts("0");
        return;
    }
    int ans = 0;
    sort(s.begin(), s.end());
    for (auto c : s)
    {
        m += - (c - '0') + 9;
        ans++;
        if (m >= n)
            break;
    }
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