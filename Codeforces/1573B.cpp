#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n + 1), b(n + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i + 1];
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        b[x] = i + 1;
    }
    for (int i = n - 1; i > 0; i--)
    {
        b[2 * i] = min(b[i * 2], b[(i + 1) * 2]);
    }
    int ans = n * 2;
    for (int i = 0; i < n; i++)
    {
        ans = min(ans, i + b[a[i + 1] + 1] - 1);
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