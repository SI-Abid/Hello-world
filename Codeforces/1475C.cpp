#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> a(k),b(k);
    vector<int> ac(n+1,0),bc(m+1,0);
    for(auto &x:a)
    {
        cin>>x;
        x--;
        ac[x]++;
    }
    for(auto &x:b)
    {
        cin>>x;
        x--;
        bc[x]++;
    }
    ll ans=k*(k-1LL);
    for (int i = 0; i < k; i++)
    {
        ans-= ac[a[i]]+bc[b[i]]-2;
    }
    cout<<ans/2<<nl;
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