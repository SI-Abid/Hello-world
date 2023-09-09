#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    string s;
    cin >> s;
    ll ans = 0;
    for (auto c : s)
    {
        if ((c - '0') % 4 == 0)
            ans++;
    }
    for (size_t i = 0; i < s.size() - 1; i++)
    {
        int num = (s[i] - '0') * 10 + (s[i + 1] - '0');
        if (num % 4 == 0)
        {
            ans += i + 1;
        }
    }
    cout << ans;
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