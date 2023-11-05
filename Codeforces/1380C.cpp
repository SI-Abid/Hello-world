#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n,x;
    cin>>n>>x;
    vector<int> a(n);
    for(auto &var : a)
    {
        cin>>var;
    }
    sort(a.rbegin(),a.rend());
    int ans=0;
    int cnt=0;
    for (int i = 0; i <n; i++)
    {
        cnt++;
        if(a[i]*cnt>=x)
        {
            ans++;
            // cout<<cnt<<" "<<a[i]<<nl;
            cnt=0;
        }
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