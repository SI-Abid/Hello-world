#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

ll sum(ll n){
    return (n*(n+1))/2;
}

void solve()
{
    ll n,x,p;
    cin>>n>>x>>p;
    for (ll i = 1; i <= min(p,n+n); i++)
    {
        if((x+sum(i))%n==0){
            puts("Yes");
            return;
        }
    }
    puts("No");
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