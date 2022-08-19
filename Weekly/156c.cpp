#include<bits/stdc++.h>
using namespace std;

int binpow(long long x, int n)
{
    if(n == 0)
        return 1;
    if(n == 1)
        return x;
    if(n % 2 == 0)
        return binpow(x * x % 1000000007, n / 2)%1000000007;
    else
        return x * binpow(x * x % 1000000007, n / 2)%1000000007;
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        cout<<binpow(n,k)<<"\n";
    }
    return 0;
}