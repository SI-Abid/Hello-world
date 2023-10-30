#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
ll get(ll n)
{
    return n * (n - 1) / 2;
}
void solve()
{
    int n, m;
    cin >> n >> m;
    int a = n - m + 1;
    ll mx = get(a);
    a = n / m;
    ll mn = get(a + 1) * (n % m) + get(a) * (m - n % m);
    cout << mn << " " << mx << nl;
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