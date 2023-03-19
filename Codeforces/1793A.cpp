#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int _;
    cin>>_;
    for(int tc=1;tc<=_;tc++)
    {
        // printf("Case %d: ",tc);
    
        long long a,b,n,m;
        cin>>a>>b>>n>>m;
        long long ans=n/(m+1);
        long long y=n%(m+1);
        if(a*m<b*(m+1))
        {
            ans*=a*m;
        }
        else
        {
            ans*=b*(m+1);
        }
        ans+=y*min(a,b);
        cout<<ans<<endl;
    }
    return 0;
}