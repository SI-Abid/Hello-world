#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n;cin>>n;
        vector<int> v(n);
        for (size_t i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        // v.push_back(v[0]);
        int mx = *max_element(v.begin(),v.end());
        int mn = *min_element(v.begin(),v.end());
        int ans = 0;
        if(mn==v[0] or mx==v[n-1])
        {
            cout<<mx-mn<<'\n';
            continue;
        }
        for (size_t i = 0; i < n-1; i++)
        {
            // if(v[i]==mx)
            // {
                ans=max(ans,v[i]-v[i+1]);
                // break;
            // }
        }
        for (size_t i = n-1; i >0; i--)
        {
            // if(v[i]==mn)
            // {
                ans=max(ans,v[i-1]-v[i]);
                // break;
            // }
        }
        ans = max({ans, mx-v[0], v.back()-mn});
        cout<<ans<<'\n';
    }
    return 0;
}