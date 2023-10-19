#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
int read()
{
    int _;
    cin >> _;
    return _;
}
void solve()
{
    int n, m, d;
    cin >> n >> m >> d;
    vector<int> pos(n);
    for (int i = 0; i < n; i++)
    {
        pos[read() - 1] = i;
    }
    vector<int> a(m);
    for (int i = 0; i < m; i++)
    {
        a[i] = read() - 1;
    }
    int ans = n;
    for (int i = 1; i < m; i++)
    {
        int x = pos[a[i - 1]];
        int y = pos[a[i]];
        if (d >= n - 1)
        {
            ans = min(ans, max(0, y - x));
        }
        else
        {
            ans = min(ans, max(0, min(d + 1 - y + x, y - x)));
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