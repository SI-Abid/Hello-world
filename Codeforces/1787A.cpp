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
        if(n&1)cout<<"-1";
        else
        {
            cout<<n/2<<" 1";
        }
        cout<<endl;
    }
    return 0;
}