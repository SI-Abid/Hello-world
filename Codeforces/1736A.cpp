#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n;
        cin>>n;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        int dif=0;
        for(int i=0;i<n;i++)
        {
            dif+=(a[i]^b[i]);
        }
        int cnta=0,cntb=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==1)
            {
                cnta++;
            }
            if(b[i]==1)
            {
                cntb++;
            }
        }
        int ans=abs(cnta-cntb);
        if(cnta==cntb and dif!=0)
        {
            cout<<"1\n";
        }
        else
        {
            cout<<min(ans+1,dif)<<"\n";
        }
    }
    return 0;
}