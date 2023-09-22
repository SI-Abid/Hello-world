#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    vector<string> v(10);
    for (size_t i = 0; i < 10; i++)
    {
        cin >> v[i];
    }
    int ans = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (v[i][j] == 'X')
            {
                int x = max(5 - i, i - 4);
                int y = max(5 - j, j - 4);
                ans += 6 - max(x, y);
            }
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