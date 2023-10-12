#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    int x = min({a, b, c});
    if (a % x or b % x or c % x)
    {
        puts("NO");
    }
    else
    {
        ll ans = 0;
        ans += (a / x) - 1;
        ans += (b / x) - 1;
        ans += (c / x) - 1;
        if (ans <= 3)
            puts("YES");
        else
            puts("NO");
    }
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