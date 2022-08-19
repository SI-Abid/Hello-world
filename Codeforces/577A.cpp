#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int ans = 0;
    for(int i=1;i<=n;i++)
    {
        if((m%i)==0 and (m/i)<=n)
            ans++;
    }
    cout<<ans<<"\n";
    return 0;
}