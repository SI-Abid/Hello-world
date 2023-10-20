#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    int owtn = n + n;
    vector<int> a(owtn);
    for (int i = 0; i < owtn; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    if (n == 1)
        cout << abs(a[0] - a[1]) << nl;
    else
    {
        ll res = 0;
        for (int i = 0; i < n * 2; ++i)
            res += abs(a[i]);
        if (n == 2)
        {
            ll tot = 0;
            for (int i = 0; i < n * 2; ++i)
                tot += abs(a[i] - 2);
            res = min(res, tot);
        }
        if (n % 2 == 0)
        {
            ll tot = abs(a[n * 2 - 1] - n);
            for (int i = 0; i < n * 2 - 1; ++i)
                tot += abs(a[i] + 1);
            res = min(res, tot);
        }
        cout << res << nl;
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