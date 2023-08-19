#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    ll a, b;
    cin >> a >> b;
    while (a > 0 and b > 0)
    {
        // if(a==0 or b==0)break;
        if (a >= 2 * b)
        {
            a = a % (2 * b);
        }
        else if (b >= 2 * a)
        {
            b = b % (2 * a);
            // break;
        }
        else
            break;
    }
    cout << a << ' ' << b << nl;
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