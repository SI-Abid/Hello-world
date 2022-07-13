#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n,k;
        cin>>n>>k;
        vector<ll> a(n);
        int cnt=0;
        ll ans=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>k)
                cnt++;
        }
        int factor=1;
        for(int i=0;i<n;i++)
        {
            a[i]/=factor;
            if(a[i]>k)
            {
                ans+= a[i]-k;
                cnt--;
            }
            else
            {
                if(cnt>0)
                {
                    ans+= a[i]-k;
                }
                else
                {
                    factor*=2;
                    ans+= a[i]/factor;
                }
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}