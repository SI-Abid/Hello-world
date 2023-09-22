#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    ll l = 1LL, h = 1e10;
    while (l < h)
    {
        ll mid = l + (h - l + 1) / 2;
        ll water = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] < mid)
                water += mid - a[i];
            if (water > k)
                break;
        }

        if (water > k)
        {
            h = mid - 1;
        }
        else
        {
            l = mid;
        }
    }
    cout << l << nl;
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