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
    for (int i = 1; i < 10; i++)
    {
        for (int j = (1 << i); j < (1 << (i + 1)) - 1; j++)
        {
            if (j >= n - 1)
            {
                puts("YES");
                return;
            }
            if (a[j] > a[j + 1])
            {
                puts("NO");
                return;
            }
        }
    }
    puts("YES");
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