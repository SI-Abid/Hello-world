#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n, u, v;
    cin >> n >> u >> v;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (abs(a[i] - a[i + 1]) > 1)
        {
            cout << "0\n";
            return;
        }
    }
    bool flag = true;
    for (int i = 0; i < n - 1; i++)
    {
        flag &= a[i] == a[i + 1];
    }
    if (flag)
        cout << min(u, v) + v << nl;
    else
        cout << min(u, v) << nl;
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