#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
const int mod = 998244353;
void solve()
{
    int l, r;
    cin >> l >> r;
    int a = r;
    int cnt = 0;
    while (r >= l)
    {
        cnt++;
        r /= 2;
    }
    cnt--;
    int x = a / (1 << cnt) - l + 1;
    int ans = x;
    x = max(-1, a / ((1 << (cnt - 1)) * 3) - l) + 1;
    x *= cnt;
    ans += x;
    cout << cnt + 1 << " " << ans << nl;
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