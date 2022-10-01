#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int ans=INT_MAX;
        for(int i=2;i<n;i++)
        {
            ans=min(ans,v[i]-v[i-2]);
        }
        cout<<ans<<endl;
    }
    return 0;
}