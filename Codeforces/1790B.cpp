#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int _;
    cin>>_;
    for(int tc=1;tc<=_;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n,s,r;
        cin>>n>>s>>r;
        int mx=s-r;
        cout<<mx;
        s-=mx;
        while(n>1)
        {
            n--;
            int d=max(1,min(mx,s-n+1));
            cout<<" "<<d;
            s-=d;
        }
        cout<<endl;
    }
    return 0;
}