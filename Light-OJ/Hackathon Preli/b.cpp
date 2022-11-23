#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
signed main()
{
    int n;
    cin>>n;
    vector<pair<ll,ll>> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end(),[](pair<ll,ll> a,pair<ll,ll> b){
        if (a.first == b.first) {
            return a.second > b.second;
        }
        return a.first > b.first;
    });
    ll ans=0;
    ll curx=0;
    ll cury=0;
    ans+=(v[0].first*v[0].second);
    curx=v[0].first;
    cury=v[0].second;
    for(auto [x,y]:v)
    {
        if(y>cury)
        {
            ans+= x * (y-cury);
            curx=x;
            cury=y;
        }
    }
    cout<<ans<<endl;
    return 0;
}