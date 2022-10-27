#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

signed main()
{
    int _;
    cin>>_;
    for(int tc=1;tc<=_;tc++)
    {
        // printf("Case %d: ",tc);
    
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        ll x=-1,y=-1;
        for(x=a+1;x<=c;x++)
        {
            ll s = (a*b)/__gcd(a*b,x);
            if((d/s)*s>b)
            {
                y=(d/s)*s;
                break;
            }
        }
        if(y==-1)
        {
            cout<<"-1 -1\n";
        }
        else
        {
            cout<<x<<" "<<y<<'\n';
        }
    }
    return 0;
}