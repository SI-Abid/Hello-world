#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    ll n,k;
    cin>>n>>k;
    map<ll,ll> mp;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x%k==0)
            continue;
        mp[k-(x%k)]++;
    }
    if(mp.empty())
    {
        cout<<0<<nl;
        return;
    }
    auto mx = *max_element(mp.begin(),mp.end(),[](auto &p1,auto &p2){ if (p1.second==p2.second) return p1.first<p2.first; return p1.second<p2.second;});
    ll m = mx.first;
    ll x = mx.second;
    ll ans = k*(x-1)+m+1;
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