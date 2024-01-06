#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;cin>>n;
    vector<int> v(n);
    for(auto &x:v)cin>>x;
    map<ll,ll>mp;
    ll s=0;
    mp[0]=1;
    for (int i = 0; i < n; i++)
    {
        v[i]*=(i%2==0?-1:1);
        s+=v[i];
        if(mp[s])
        {
            puts("YES");
            return;
        }
        mp[s]++;
    }
    puts("NO");
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