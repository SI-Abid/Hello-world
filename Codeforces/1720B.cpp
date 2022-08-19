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
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a.begin(),a.end());
        long long ans=0;
        ans-=a[0];
        ans-=a[1];
        ans+=a[n-2];
        ans+=a[n-1];
        cout<<ans<<'\n';
    
    }
    return 0;
}