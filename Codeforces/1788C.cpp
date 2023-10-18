#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        puts("No");
        return;
    }
    puts("Yes");
    for (int i = 1; i <= (n + 1) / 2; i++)
    {
        cout << i << " " << 2 * n - 2 * i + 2 << nl;
    }
    for (int i = n; i > (n + 1) / 2; i--)
    {
        cout << i << " " << 3 * n - 2 * i + 2 << nl;
    }
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