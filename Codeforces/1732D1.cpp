#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
signed main()
{
    int _;
    cin>>_;
    map<ll,ll> mp,rv;
    ll MAX=0;
    for(int tc=1;tc<=_;tc++)
    {
        // printf("Case %d: ",tc);

        char c;
        ll x;
        cin>>c>>x;
        if(c=='+')
        {
            mp[x]=1;
            MAX=max(MAX,x);
        }
        else
        {
            ll i;
            if(!rv[x]) rv[x]=x;
            for(i=rv[x];i<=MAX+x;i+=x)
            {
                if(mp[i]==0)
                {
                    break;
                }
            }
            rv[x]=i;
            cout<<i<<'\n';
        }
    }
    return 0;
}