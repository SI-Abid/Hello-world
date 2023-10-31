#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    ll n,m,d;
    cin>>n>>m>>d;
    ll ans=0,sum=0;
    priority_queue<int, vector<int>, greater<int> > pq;
    for(int i=1; i<=n; i++)
    {
        int x;
        cin>>x;
        x= max(-d,x-d);
        sum+=x;
        pq.push(x);
        if(pq.size()>m){
             sum-=(pq.top()+d);
             pq.pop();
        }
        ans=max(ans,sum);
 
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