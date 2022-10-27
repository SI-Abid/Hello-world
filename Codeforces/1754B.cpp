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
        for(int i=n/2;i>=1;i--)
        {
            cout<<i<<' '<<i+n/2<<' ';
        }
        if(n%2)
        {
            cout<<n;
        }
        cout<<'\n';
    }
    return 0;
}