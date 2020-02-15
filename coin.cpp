#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n, a, b, c;
        cin>>a>>b>>c>>n;
        ll m = max(a,max(b,c));
        ll sum = a+b+c+n;
        if (sum%3==0 && sum/3>=m)
            cout<<"YES"<<endl;

        else    cout<<"NO"<<endl;
    }
    return 0;
}
