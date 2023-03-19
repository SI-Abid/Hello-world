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
    
        int n,q;
        cin>>n>>q;
        vector<ll> v(n+1,0LL);
        for(int i=1;i<=n;i++)
        {
            cin>>v[i];
        }
        vector<ll> pre(n+1);
        for(int i=1;i<=n;i++)
        {
            pre[i]=pre[i-1]+v[i];
        }
        ll sum=pre[n];
        while(q--)
        {
            int l,r,k;
            cin>>l>>r>>k;
            ll sub=k*(r-l+1);
            ll newsum=sum-pre[r]+pre[l-1]+sub;
            if(newsum&1)//odd
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
        }
    }
    return 0;
}