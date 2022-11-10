#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int _;
    cin>>_;
    for(int tc=1;tc<=_;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n; cin>>n;
        vector<int> x(n),t(n);
        for(int i=0;i<n;i++)
        {
            cin>>x[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>t[i];
        }
        int mn,mx;
        mn=INT_MAX;
        mx=INT_MIN;
        for(int i=0;i<n;i++)
        {
            mn=min(mn,x[i]-t[i]);
            mx=max(mx,x[i]+t[i]);
        }
        int ans=mn+mx;
        cout<<ans/2;
        if(ans&1)
        {
            cout<<".5";
        }
        cout<<"\n";
    
    }
    return 0;
}