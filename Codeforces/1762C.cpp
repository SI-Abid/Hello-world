#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
const int mod = 998244353;

ll bigmod(ll a, ll p)
{
    if (p == 0)
        return 1;
    ll ans = bigmod(a, p / 2);
    ans = (ans % mod * ans % mod) % mod;
    if (p % 2)
        ans = (ans % mod * a % mod) % mod;
    return ans;
}

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    char c = s.front();
    ll cnt = 1, ans = 1;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == c)
            cnt++;
        else
            cnt = 1, c = s[i];
        ans += bigmod(2, cnt - 1);
        ans %= mod;
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