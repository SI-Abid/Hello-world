#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

signed main()
{
    int _;
    cin>>_;
    for(int tc=1;tc<=_;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n;
        cin>>n;
        vector<pair<ll,ll>> a(n);
        ll y=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i].first>>a[i].second;
            if(a[i].first<a[i].second)
            {
                swap(a[i].first,a[i].second);
            }
            y=max(y,a[i].first);
        }
        ll x=0;
        for(int i=0;i<n;i++)
        {
            x+=a[i].second;
        }
        // cout<<x<<' '<<y<<'\n';
        cout<< 2*(x+y) <<'\n';
    }
    return 0;
}