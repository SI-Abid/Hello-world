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
        vector<ll> v(n+1,0);
        for(int i=0;i<n;i++)
        {
            cin>>v[i+1];
        }
        sort(v.begin(),v.end());
        vector<ll> pre(n+1);
        for(int i=1;i<=n;i++)
        {
            pre[i]=pre[i-1]+v[i];
        }
        bool ok=true;
        for(int i=2;i<=n;i++)
        {
            if(v[i]>pre[i-1])
            {
                ok=false;
                break;
            }
        }
        if(ok and v[1]==1)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}