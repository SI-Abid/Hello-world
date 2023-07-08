#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int _;
    cin>>_;
    for(int tc=1;tc<=_;tc++)
    {
        int n,t;
        cin>>n>>t;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        int ans=0;
        int idx=-2;
        for(int i=0;i<n;i++)
        {
            int cur=a[i]+i;
            if(cur<=t)
            {
                if(b[i]>ans)
                {
                    ans=b[i];
                    idx=i;
                }
            }
        }
        cout<<idx+1<<"\n";
    }
    return 0;
}