#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int _;
    cin>>_;
    for(int tc=1;tc<=_;tc++)
    {
        // printf("Case %d: ",tc);
    
        int x,y,a,b;
        cin>>x>>y>>a>>b;
        int dx=a-x;
        int dy=b-y;
        if(dy<0)
        {
            cout<<"-1\n";
            continue;
        }
        int ans=dy;
        dx-=dy;
        if(dx>0)
        {
            cout<<"-1\n";
            continue;
        }
        ans+=abs(dx);
        cout<<ans<<endl;
    }
    return 0;
}