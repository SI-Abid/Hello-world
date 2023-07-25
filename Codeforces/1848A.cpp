#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int _;
    cin>>_;
    for(int tc=1;tc<=_;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n,m,k;
        cin>>n>>m>>k;
        int x,y;
        cin>>x>>y;
        bool caught=false;
        while(k--)
        {
            int a,b;
            cin>>a>>b;
            int diff=abs(a-x)+abs(b-y);
            if(diff%2==0)
            {
                caught=true;
            }
        }
        if(caught)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }
    }
    return 0;
}