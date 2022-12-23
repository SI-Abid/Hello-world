#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int _;
    cin>>_;
    for(int tc=1;tc<=_;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        // sort(a.begin(),a.end());
        int mini=a[0];
        for(int i=1;i<n;i++)
        {
            mini=__gcd(mini,a[i]);
        }
        // mini=min(mini,a[0]);
        cout<<a[n-1]/mini<<endl;
    
    }
    return 0;
}