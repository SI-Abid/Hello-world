#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    string s;
    cin >> s;
    int ans = (s.size() - 1) * 9;
    int k = s[0] - '0';
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] < s[0])
        {
            cout << ans + k - 1 << nl;
            return;
        }
    }
    cout << ans + k << nl;
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