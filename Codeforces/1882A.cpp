#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;cin>>n;
    int x=0;
    for (size_t i = 0; i < n; i++)
    {
        x++;
        int xx;cin>>xx;
        if(x==xx)x++;
    }
    cout<<x<<nl;
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