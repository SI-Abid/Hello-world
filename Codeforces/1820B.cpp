#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    string s;
    cin >> s;
    ll n = s.size();
    if (s == string(n, '1'))
    {

        cout << n * n << nl;
        return;
    }
    s += s;
    ll ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
        {
            ll cnt = 0;
            while (i < s.size() and s[i] == '1')
            {
                cnt++;
                i++;
            }
            for (ll i = 0; i < cnt; i++)
            {
                ans = max(ans, (i + 1) * (cnt - i));
            }
        }
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