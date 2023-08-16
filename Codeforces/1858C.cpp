#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a;
    vector<bool> vis(n + 1, false);
    for (int i = 1; i <= n; i++)
        for (int j = i; j <= n; j *= 2)
        {
            if (vis[j] == false)
            {
                vis[j] = true;
                a.push_back(j);
            }
        }
    for (auto x : a)
        cout << x << ' ';
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