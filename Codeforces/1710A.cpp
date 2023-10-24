#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(k);
    for (auto &x : a)
        cin >> x;
    ll sn = 0;
    ll sm = 0;
    vector<int> b(k);
    for (int i = 0; i < k; i++)
    {
        b[i] = a[i] / m;
    }
    sort(b.rbegin(), b.rend());
    ll s = 0;
    for (int i = 0; i < k; i++)
    {
        if (b[i] < 2)
            break;
        s += b[i] - 2;
        if (2 * (i+1) <= n && 2 * (i+1) + s >= n)
        {
            puts("Yes");
            return;
        }
    }
    for (int i = 0; i < k; i++)
    {
        b[i] = a[i] / n;
    }
    sort(b.rbegin(), b.rend());
    s = 0;
    for (int i = 0; i < k; i++)
    {
        if (b[i] < 2)
            break;
        s += b[i] - 2;
        if (2 * (i+1) <= m && 2 * (i+1) + s >= m)
        {
            puts("Yes");
            return;
        }
    }
    puts("No");
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