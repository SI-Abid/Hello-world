#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;
    map<int, int> cnt;
    int h = 0;
    int need = 1e9;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        cnt[x]++;
        h = max(x, h);
        need = min(x, need);
    }
    int pos = 2e5 + 8;
    int ans = 0;
    ll sum = 0;
    int c = 0;
    while (0 == 0)
    {
        ll x = sum - c * 1LL * (pos - 1);
        if (x > k)
        {
            ans++;
            h = pos;
            sum = pos * 1LL * c;
        }
        pos--;
        if (pos == need)
            break;
        c = +cnt[pos];
        sum += cnt[pos] * 1LL * pos;
    }
    if (h != need)
        ans++;
    cout << ans << nl;
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