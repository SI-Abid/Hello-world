#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int _;
    cin>>_;
    for(int tc=1;tc<=_;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n,k,d,w;
        cin>>n>>k>>d>>w;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        // a.push_back(a.back());
        int ans=0;
        int i,j;
        i=0;
        while(i<a.size())
        {
            int ai=a[i]+w;
            auto jj=upper_bound(a.begin(),a.end(),ai+d);
            if(jj==a.end())
            {
                j=a.size();
            }
            else
            {
                j=jj-a.begin();
            }
            int cnt=j-i;
            ans+=(cnt+k-1)/k;
            i=j;
        }
        cout<<ans<<endl;
    }
    return 0;
}