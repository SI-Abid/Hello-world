#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

signed main()
{
    int _;
    cin >> _;
    for (int tc = 1; tc <= _; tc++)
    {
        // printf("Case %d: ",tc);

        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        ll ans = 0;
        for (int i = 0; i < n - 1; i++)
        {
            ans = max(ans, abs(a[n - 1] - a[i]) + abs(a[i] - a[i + 1]));
        }
        for (int i = n - 1; i > 1; i--)
        {
            ans = max(ans, abs(a[0] - a[i]) + abs(a[i] - a[i - 1]));
        }

        // cout<<a[0]<<' '<<a[idx]<<' '<<a[n-1]<<'\n';
        cout << ans << '\n';
    }
    return 0;
}