#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        // printf("Case %d: ",tc);
    
        int m;
        cin>>m;
        int d=1;
        while(d<=m)
        {
            d*=10;
        }
        d/=10;
        cout<<m-d<<'\n';
    }
    return 0;
}