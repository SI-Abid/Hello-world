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
    if (n % 2 == 0)
    {
        for (int i = 0; i < n; i += 2)
        {
            cout << a[i + 1] << ' ' << -a[i] << ' ';
        }
    }
    else
    {
        for (int i = 0; i < n - 3; i += 2)
        {
            cout << a[i + 1] << ' ' << -a[i] << ' ';
        }
        int x, y, z;
        z = a[n - 1];
        y = a[n - 2];
        x = a[n - 3];
        if (x + y != 0)
        {
            printf("%d %d %d", -z, -z, x + y);
        }
        else if (y + z != 0)
        {
            printf("%d %d %d", y + z, -x, -x);
        }
        else
            printf("%d %d %d", -y, x + z, -y);
    }
    puts("");
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