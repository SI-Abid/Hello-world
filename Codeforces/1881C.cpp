#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

int cost(int n, int x, int y, vector<string> &v)
{
    // int dx = c - x - 1;
    // int dy = c - y - 1;
    // cout<<" "<<dx<<" "<<dy<<nl;
    int p = v[y][n - x - 1] - 'a';
    int q = v[n - y - 1][x] - 'a';
    int r = v[n - x - 1][n - y - 1] - 'a';
    int s = v[x][y] - 'a';
    int target = max({p, q, r, s});
    // cout << p << " " << q << " " << r << " " << s << " " << target << nl;
    return 4 * target - p - q - r - s;
    return 0;
}

void solve()
{
    int n;
    cin >> n;
    vector<string> v(n);
    for (auto &x : v)
        cin >> x;
    ll ans = 0;
    n /= 2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ans += cost(n + n, i, j, v);
        }
    }
    cout << ans << nl;
    // cout << nl;
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