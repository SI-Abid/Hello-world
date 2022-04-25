#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long ans=1;
    while(n)
    {
        ans*=n;
        n--;
    }
    cout<<ans<<"\n";
    return 0;
}