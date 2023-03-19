#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int _;
    cin>>_;
    for(int tc=1;tc<=_;tc++)
    {
        // printf("Case %d: ",tc);
    
        int a,b,c;
        cin>>a>>b>>c;
        if(a-b<c)
        {
            cout<<"+\n";
        }
        else{
            cout<<"-\n";
        }
    }
    return 0;
}