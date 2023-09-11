#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n + 2, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i + 1];
    }
    n++;
    a[n] = m;
    vector<int> suf(n + 2, 0);
    for (int i = n - 1; i >= 0; i--)
    {
        suf[i] = suf[i + 2] + a[i + 1] - a[i];
    }
    int ans = 0;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i & 1)
        {
            sum += a[i] - a[i - 1];
        }
        if (a[i + 1] != a[i] + 1)
        {
            int x = suf[i];
            if (i & 1)
            {
                ans = max(ans, sum + max(m - a[i] - x, x - 1));
            }
            else
            {
                ans = max(ans, sum + max(m - a[i] - x - 1, x));
            }
        }
    }
    cout << ans;
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