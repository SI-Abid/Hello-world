#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    ll n;cin>>n;
    ll ans=0;
    for (int i = 0; i < 61; i++)
    {
        ans+=(n>>i);
    }
    cout<<ans<<nl;
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