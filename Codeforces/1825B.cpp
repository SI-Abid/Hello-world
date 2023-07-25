#include <bits/stdc++.h>
using namespace std;

signed main()
{
    using ll = long long;
    int _;
    cin >> _;
    for (int tc = 1; tc <= _; tc++)
    {
        // printf("Case %d: ",tc);

        int n, m;
        cin >> n >> m;
        vector<ll> a(n * m);
        for (int i = 0; i < n * m; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        ll ans = 0;
        ll mn1 = a[0], mn2 = a[1];
        ll mx1 = a[n * m - 1], mx2 = a[n * m - 2];
        ans = (mx1 - mn1) * (n * m - min(n, m));
        ans += (min(n, m) - 1) * max(mx1 - mn2, mx2 - mn1);
        cout << ans << "\n";
    }
    return 0;
}