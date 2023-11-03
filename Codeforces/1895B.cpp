#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

int dis(pair<int,int> a,pair<int,int> b)
{
    return abs(a.first-b.first)+abs(a.second-b.second);
}

void solve()
{
    int n;cin>>n;vector<int>a(2*n);for(auto &x:a)cin>>x;
    sort(a.begin(),a.end());
    vector<pair<int,int>>ans(n);
    ll cost=0;
    for (int i = 0; i < n; i++)
    {
        ans[i]={a[i],a[i+n]};
    }
    for (int i = 0; i < n-1; i++)
    {
        cost += dis(ans[i],ans[i+1]);
    }
    cout<<cost<<nl;
    for(auto [f,s]:ans)
        cout<<f<<" "<<s<<nl;
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