#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll sum(ll n)
{
    return (n*(n+1))/2;
}
signed main()
{
    int _;
    cin>>_;
    for(int tc=1;tc<=_;tc++)
    {
        // printf("Case %d: ",tc);
    
        ll n;
        cin>>n;
        ll ans=(n*4)+sum(n-1)+sum(n-2)+1;
        cout<<ans<<"\n";
    
    }
    return 0;
}