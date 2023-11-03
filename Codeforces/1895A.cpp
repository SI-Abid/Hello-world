#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int x,y,k;cin>>x>>y>>k;
    if(y<x){
        cout<<x<<nl;
        return;
    }
    int d=y-x;
    d=max(0,d-k);
    cout<<y+d<<nl;
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