#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n,x;cin>>n>>x;
    vector<ll> a(n),b(n),c(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    for(int i=0;i<n;i++) cin>>c[i];
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if((x&a[i])<a[i]) break;
        ans|=a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if((x&b[i])<b[i]) break;
        ans|=b[i];
    }
    for (int i = 0; i < n; i++)
    {
        if((x&c[i])<c[i]) break;
        ans|=c[i];
    }
    if(ans==x) cout<<"Yes"<<nl;
    else cout<<"No"<<nl;
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