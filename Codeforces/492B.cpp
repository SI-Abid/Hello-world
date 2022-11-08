#include<bits/stdc++.h>
using namespace std;

signed main()
{
    
        int l,n;
        cin>>l>>n;
        vector<int> v(l);
        for(int i=0;i<l;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int ans=v[0]*2;
        ans=max(ans,(n-v.back())*2);
        for(int i=0;i<l-1;i++)
        {
            ans=max(ans,v[i+1]-v[i]);
        }
        cout<<setprecision(10)<<fixed<<ans/2.0<<endl;
    
    return 0;
}