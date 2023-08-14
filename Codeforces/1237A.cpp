#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    int cnt = 0;
    while (n--)
    {
        int x;
        cin >> x;
        if (x % 2 == 0)
        {
            cout << x / 2 << nl;
        }
        else
        {
            if (cnt == 0)
            {
                cout << (x + 1) / 2 << nl;
                cnt++;
            }
            else
            {
                cout << (x - 1) / 2 << nl;
                cnt--;
            }
        }
    }
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