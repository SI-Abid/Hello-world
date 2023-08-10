#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    int l, r, d, u;
    l = r = d = u = 0;
    string s;
    cin >> s;
    for (auto &&c : s)
    {
        switch (c)
        {
        case 'L':
            l++;
            break;
        case 'R':
            r++;
            break;
        case 'U':
            u++;
            break;
        case 'D':
            d++;
            break;
        default:
            break;
        }
    }
    cout << 2 * (min(l, r) + min(u, d));
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