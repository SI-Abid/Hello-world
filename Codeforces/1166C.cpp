#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    for (auto &x : a)
        cin >> x, x = abs(x);
    sort(a.begin(),a.end());
    ll ans=0;
    int i=0;
    for(auto x:a)
    {
        auto it = upper_bound(a.begin(),a.end(),x+x);
        ans += max(0LL,(ll)(it-a.begin()-1-i++));
    }
    cout<<ans;
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