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
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            cin>>b[i];
        vector<pair<int,int>> v(n);
        for(int i=0;i<n;i++)
            v[i]={a[i],i};
        sort(v.begin(),v.end());
        sort(b.begin(),b.end());
        vector<int> ans(n);
        for(int i=0;i<n;i++)
        {
            ans[v[i].second]=b[i];
        }
        for(int i=0;i<n;i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}