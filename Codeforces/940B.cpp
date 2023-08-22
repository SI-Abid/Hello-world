#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n, k, a, b;
    cin >> n >> k >> a >> b;
    if (k == 1)
    {
        cout << a * (n - 1);
        return;
    }
    int ans = 0;
    while (n > 1)
    {
        ans += n % k * a;
        n -= n % k;
        if ((n - n / k) * a > b)
        {
            ans += b;
            n /= k;
        }
        else
        {
            ans += (n - 1) * a;
            n = 1;
        }
    }
    cout << ans;
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