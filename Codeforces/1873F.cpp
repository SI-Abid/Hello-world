#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n), h(n);
    for (auto &x : a)
        cin >> x;
    for (auto &x : h)
        cin >> x;

    vector<ll> pre(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        pre[i + 1] = pre[i] + a[i];
    }
    // a[0]=0;
    int ans = 0;
    for (int i = n - 1, end = n; i >= 0; i--)
    {
        if (i + 1 < n and h[i] % h[i + 1] != 0)
            end = i + 1;

        int low = i, high = end;
        while (low < high)
        {
            int mid = low + (high - low + 1) / 2;

            if (pre[mid] - pre[i] <= k)
                low = mid;
            else
                high = mid - 1;
        }
        ans = max(ans, low - i);
    }

    // cout<<s<<nl;
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