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
        ll ans=0, sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int factor=2;
        for(int i=0;i<n;i++)
        {
            sum+=a[i]/factor;
            factor*=2;
            cnt++;
            if(cnt==30)
                break;
        }

        ans=max(ans,sum);
        sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=a[i]-k;
            int half=0;
            cnt=0;
            factor=2;
            for(int j=i+1;j<n;j++)
            {
                half+=a[j]/factor;
                factor*=2;
                cnt++;
                if(cnt==30)
                    break;
            }
            ans=max(ans,sum+half);
        }

        cout<<ans<<'\n';
    }
    return 0;
}