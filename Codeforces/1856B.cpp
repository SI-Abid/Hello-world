#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    ll som = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        som += a[i];
    }
    if (n == 1)
    {
        cout << "NO\n";
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            som -= 2;
        }
        else
        {
            som -= 1;
        }
        if (som < 0)
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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