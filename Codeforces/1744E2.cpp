#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> divisors(ll n)
{
    vector<ll> ans;
    for(ll i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            ans.push_back(i);
            if(i*i!=n)
            {
                ans.push_back(n/i);
            }
        }
    }
    return ans;
}
signed main()
{
    int _;
    cin>>_;
    for(int tc=1;tc<=_;tc++)
    {
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        ll x=-1,y=-1;
        // auto divs = divisors(a*b);
        for(ll z:divisors(a*b))
        {
            if(z<=a or z>c)
            {
                continue;
            }
            ll s = (a*b)/__gcd(a*b,z);
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