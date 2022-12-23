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
        vector<int> a(n+1);
        for(int i=0;i<n;i++)
        {
            cin>>a[i+1];
        }
        sort(a.begin(),a.end());
        if(a[1]==a[n])
        {
            cout<< n/2 <<endl;
        }
        else
        {
            long long ans=0;
            int l,r;
            l=r=1;
            while(l<=n)
            {
                while(r<n and a[r+1]==a[l])
                {
                    r++;
                }
                ans=max(ans,1LL*(n-r)*r);
                l=++r;
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}