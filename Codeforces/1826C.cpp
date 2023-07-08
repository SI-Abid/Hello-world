#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int _;
    cin>>_;
    for(int tc=1;tc<=_;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n,m;
        cin>>n>>m;
        if(__gcd(n,m)==1) cout<<"YES\n";
        else cout<<"NO\n";
    
    }
    return 0;
}