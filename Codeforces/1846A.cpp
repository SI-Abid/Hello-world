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
        int ans=0;
        while(n--)
        {
            int a,b;
            cin>>a>>b;
            if(a>b)
                ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}