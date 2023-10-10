#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> c(n + 1, 0);
    while (m--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        if (c[x] != 0)
        {
            c[y] = c[x] % 3 + 1;
            c[z] = c[y] % 3 + 1;
        }
        else if (c[y] != 0)
        {
            c[z] = c[y] % 3 + 1;
            c[x] = c[z] % 3 + 1;
        }
        else if (c[z] != 0)
        {
            c[x] = c[z] % 3 + 1;
            c[y] = c[x] % 3 + 1;
        }
        else
        {
            c[x] = 1;
            c[y] = 2;
            c[z] = 3;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << c[i + 1] << ' ';
    }
    cout << nl;
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