#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int limit, sum;
    cin >> sum >> limit;
    int a[1000000];
    int k = 0;
    for (int i = limit; i > 0; i--)
    {
        ll x = i & (-i);
        if (sum - x < 0)
            continue;
        sum -= x;
        a[k++] = i;
    }
    if (sum)
        puts("-1");
    else
    {
        cout << k << nl;
        while (k-- > 0)
            cout << a[k] << " ";
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