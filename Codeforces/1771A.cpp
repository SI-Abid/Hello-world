#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
signed main()
{
    ll _;
    cin>>_;
    for(ll tc=1;tc<=_;tc++)
    {
        // prllf("Case %d: ",tc);
    
        ll n;
        cin>>n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
        }
        ll mini=*min_element(v.begin(),v.end());
        ll maxi=*max_element(v.begin(),v.end());
        ll mincnt=0,maxcnt=0;
        for(ll i=0;i<n;i++)
        {
            if(v[i]==mini)
            {
                mincnt++;
            }
            if(v[i]==maxi)
            {
                maxcnt++;
            }
        }
        if(mini==maxi)
        {
            cout<<(n*(n-1))<<endl;
        }
        else
        {
            cout<<(2*mincnt*maxcnt)<<endl;
        }
    }
    return 0;
}