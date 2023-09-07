#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    a = abs(a - c);
    b = abs(b - d);
    cin >> c >> d;
    if (a%c==0 and b%d==0 and (a / c) % 2 == (b / d) % 2)
    {
        puts("YES");
    }
    else
    {
        puts("NO");
    }
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