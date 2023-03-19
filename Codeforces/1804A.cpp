#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int _;
    cin>>_;
    for(int tc=1;tc<=_;tc++)
    {
        // printf("Case %d: ",tc);
    
        int r,c;
        cin>>r>>c;
        r=abs(r);
        c=abs(c);
        int ans=r+c;
        if(abs(r-c)>1)
        {
            int tmp=abs(r-c)-1;
            ans+=tmp;
        }
        cout<<ans<<endl;
    }
    return 0;
}