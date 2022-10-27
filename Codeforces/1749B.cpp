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
        vector<ll> a(n);
        // map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<ll> b(n);
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
            // mp[b[i]]=i;
        }
        ll ans=0;
        int mxP=max_element(b.begin(),b.end())-b.begin();
        for(int i=0;i<mxP;i++)
        {
            ans+=a[i]+b[i];
        }
        for(int i=n-1;i>mxP;i--)
        {
            ans+=a[i]+b[i];
        }
        ans+=a[mxP];
        cout<<ans<<endl;
    }
    return 0;
}