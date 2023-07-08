#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int _;
    cin>>_;
    for(int tc=1;tc<=_;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n,k;
        cin>>n>>k;
        if(n%k!=0)
        {
            cout<<1<<"\n"<<n<<endl;
            continue;
        }

        int ans=((n-1)/k)*k+1;
        cout<<2<<"\n"<<ans<<" "<<n-ans<<endl;
    }
    return 0;
}