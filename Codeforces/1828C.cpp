#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
signed main()
{
    int _;
    int mod=1e9+7;
    cin>>_;
    for(int tc=1;tc<=_;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n;
        cin>>n;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        ll ans=1;
        ll dec=0;
        for(int i=n-1;i>=0;i--)
        {
            if(a[i]<b[i])
            {
                ans=0;
                break;
            }
            else
            {
                int x=a.end()-upper_bound(a.begin(),a.end(),b[i]);
                ans=(ans*(x-dec++))%mod;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}