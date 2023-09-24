#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;
    int cor = 0;
    vector<bool> vis(n, 0);
    for (int i = 0; i < min(n, 31); i++)
    {
        int mx = 0;
        int idx = -1;
        for (int j = 0; j < n; j++)
        {
            if (vis[j])
                continue;
            if ((cor | a[j]) > mx)
            {
                mx = (cor | a[j]);
                idx = j;
            }
        }
        vis[idx] = true;
        cout << a[idx] << " ";
        cor |= a[idx];
    }
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
            cout << a[i] << " ";
    }
    cout << nl;
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