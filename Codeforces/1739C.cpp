#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 998244353 
ll nCr(ll n, ll r)
{
    if(r>n)
        return 0;
    if(r==0)
        return 1;
    ll ans=1;
    for(ll i=1;i<=r;i++)
    {
        ans*=(n-i+1);
        ans/=i;
    }
    return ans;
}

ll fi[1000001], la[]

int main()
{
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n;
        cin>>n;
        int r=n/2;
        ll alex = nCr(n-1, r-1);
    
    }    
    return 0;
}