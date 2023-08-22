#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    int x, y = -1, z = -2;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    for (int i = 0; i < n; i++)
    {
        x = a[i];
        if (x % 2)
        {
            if (x < y)
            {
                puts("No");
                return;
            }
            y = x;
        }
        else
        {
            if (x < z)
            {
                puts("No");
                return;
            }
            z = x;
        }
    }
    puts("Yes");
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