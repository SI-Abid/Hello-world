#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
ll sum(ll n)
{
    return (n * (n + 1)) / 2;
}
void solve()
{
    ll n, k, x;
    cin>>n>>k>>x;
    ll high = k * n - sum(k - 1);
    ll low = sum(k);
    if (x > high or x < low)
    {
        puts("NO");
    }
    else
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