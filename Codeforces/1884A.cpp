#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

int sum(int n)
{
    int ans = 0;
    while (n > 0)
    {
        ans += n % 10;
        n /= 10;
    }
    return ans;
}

void solve()
{
    int x, k;
    cin >> x >> k;
    x = max(x, k);
    while (sum(x) % k != 0)
        x++;
    cout << x << nl;
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