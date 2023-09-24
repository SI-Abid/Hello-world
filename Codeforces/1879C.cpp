#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

const int mod = 998244353;
ll fac[300000];
void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    ll ans = 0;
    ll cntt = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            ll cnt = 1;
            while (i < n - 1 and s[i] == s[i + 1])
            {
                cnt++;
                i++;
            }
            cntt += cnt - 1;
            ans = (ans + fac[cnt]) % mod;
        }
    }
    if (ans == 0 and cntt == 0)
        puts("0 1");
    else
        cout << cntt << " " << ans << nl;
}

signed main()
{
    fac[0] = fac[1] = 1;
    for (int i = 2; i < 300000; i++)
    {
        fac[i] = (fac[i - 1] * i) % mod;
        assert(fac[i] > 0);
    }

    int _(1);
    cin >> _;
    for (int tc = 1; tc <= _; tc++)
    {
        // printf("Case %d: ",tc);
        solve();
    }
    return 0;
}