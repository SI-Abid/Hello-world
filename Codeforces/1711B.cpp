#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n,m;
        cin>>n>>m;
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        map<int,int> mp;
        vector<pair<int,int>> v(m);
        for(int i=0;i<m;i++)
        {
            cin>>v[i].first>>v[i].second;
            mp[v[i].first]++;
            mp[v[i].second]++;
        }
        int ans=INT_MAX;
        if(m%2==0)
            ans=0;
        for(int i=1;i<=n;i++)
        {
            if(mp[i]%2==1)
                ans=min(ans,a[i-1]);
        }
        for(auto [x,y]: v)
        {
            if((mp[x]+mp[y]-1)&1)
            {
                ans=min(ans, a[x-1]+a[y-1]);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}