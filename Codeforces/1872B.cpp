#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;cin>>n;
    int ans=INT_MAX;
    while(n--)
    {
        int d,s;
        cin>>d>>s;
        ans=min(ans,d+(s-1)/2);
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