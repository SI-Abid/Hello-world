#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    ll n;
    cin >> n;
    auto sum = [](ll n) -> ll
    {
        return n * (n + 1) / 2;
    };
    ll l = 1, r = 2648956421, ans;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (sum(mid - 1) > n)
            r = mid - 1;
        else
        {
            l = mid + 1;
            ans = mid;
        }
    }
    cout << ans + n - sum(ans - 1) << nl;
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