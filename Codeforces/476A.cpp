#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    if(m>n)
    {
        cout<<"-1\n";
        return 0;
    }
    int ans = n/2;
    ans += n%2;
    while(ans%m!=0)
        ans++;
    cout<<ans<<"\n";
    return 0;
}