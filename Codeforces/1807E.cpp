#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int _;
    cin>>_;
    for(int tc=1;tc<=_;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n;
        cin>>n;
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
        int l=1,r=n;
        int ans=0;
        while(l<r)
        {
            int mid=(l+r)/2;
            ll sum1=pre[mid]-pre[l-1];
            ll sum2=pre[r]-pre[mid];
            cout<<"? "<<(mid-l+1);
            for(int i=l;i<=mid;i++)
            {
                cout<<" "<<i;
            }
            cout<<endl;
            cout.flush();
            ll x;
            cin>>x;
            if(x==sum1)
            {
                l=mid+1;
            }
            else
            {
                r=mid;
            }
        }
        cout<<"! "<<l<<endl;
    }
    return 0;
}