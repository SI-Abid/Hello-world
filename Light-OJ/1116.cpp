#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t,i=1;cin>>t;
    while(t--)
    {
        ll a;cin>>a;
        cout<<"Case "<<i++<<": ";
        if(a&1)
        {
            cout<< "Impossible" <<endl;
            continue;
        }
        ll n=a/2;
        ll m=2;
        while(n%2==0)
        {
            n/=2;
            m*=2;
        }
        cout<< n <<" "<<m<<endl;
    }
    return 0;
}