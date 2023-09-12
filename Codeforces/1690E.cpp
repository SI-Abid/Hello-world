#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);

    ll ans = 0;
    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
        ans += a[i] / k;
        a[i] %= k;
    }
    // ll sm = accumulate(a.begin(), a.end(), 0);
    sort(a.begin(), a.end());
    for (int i = 0, j = n - 1; i < j; i++)
    {
        if (a[i] + a[j] >= k)
        {
            ans++;
            j--;
        }
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