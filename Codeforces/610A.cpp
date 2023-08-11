#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;cin>>n;
    if(n&1){
        cout<<"0";
        return;
    }
    int ans=n/4;
    n>>=1;
    if(n%2==0)
        ans--;
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