#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int l, r;
    cin >> l >> r;
    if (l == r)
    {
        for (int i = 2; i * i <= l; i++)
        {
            if (__gcd(i, l - i) > 1)
            {
                cout << i << " " << l - i << nl;
                return;
            }
        }
        cout << "-1" << nl;
        return;
    }
    if (r-2>0 and __gcd(r - 2, 2) > 1)
    {
        cout << "2 " << r - 2;
    }
    else if (r-3>0 and __gcd(r - 3, 2) > 1)
    {
        cout << "2 " << r - 3;
    }
    else
        cout << "-1";
    cout << nl;
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