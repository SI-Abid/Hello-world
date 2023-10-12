#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    for (auto &x : a)
        cin >> x;
    map<ll, ll> cnt;
    for (int i = 0; i < n; i++)
    {
        ll x = a[i];
        for (ll j = 2; j * j <= x; j++)
        {
            while (x % j == 0)
            {
                cnt[j]++;
                x /= j;
            }
        }
        if (x > 1)
            cnt[x]++;
    }
    for (auto [k, v] : cnt)
    {
        if (v % n != 0)
        {
            puts("NO");
            return;
        }
    }
    puts("YES");
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