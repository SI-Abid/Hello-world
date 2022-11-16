#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
signed main()
{
    int _;
    cin>>_;
    for(int tc=1;tc<=_;tc++)
    {
        printf("Case %d: ",tc);
    
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            mp[abs(a[i])]=i;
        }
        ll ans=0;
        for(auto [x,y]:mp)
        {
            ans+=a[y];
        }
        cout<<ans<<endl;
    }
    return 0;
}