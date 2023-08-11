#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n, k, d, w;
    cin >> n >> k >> d >> w;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int ans = 0, i = 0;
    while (i < n)
    {
        ans++;
        // cout<<a[i]<<' ';
        int x = a[i] + w + d;
        auto it = upper_bound(a.begin(), a.end(), x);
        if (it == a.end())
        {
            break;
        }
        int z = it - a.begin();
        if (i + k < z)
            i += k;
        else
            i = z;
    }
    cout << ans << nl;
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