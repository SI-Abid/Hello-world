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
        for(int i=0;i<n;i++) cin>>a[i];
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
            {
                int cnt=0;
                while(i<n && a[i]==0)
                {
                    cnt++;
                    i++;
                }
                ans=max(ans,cnt);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}