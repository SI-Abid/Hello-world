#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n, m;
    cin >> n;
    vector<int> a(n);
    for (int &x : a)
        cin >> x;
    cin >> m;
    vector<int> b(m);
    for (int &x : b)
        cin >> x;
    int ans = 0;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for (int &x : a)
    {
        for (int &y : b)
        {
            if (abs(x - y) <= 1)
            {
                ans++;
                y = 1000;
                break;
            }
        }
    }
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