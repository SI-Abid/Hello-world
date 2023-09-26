#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    if(s==string(n,'0'))
    {
        puts("0");
        return;
    }
    int cnt=0;
    for (char x:s)
    {
        cnt+=(x=='1');
    }
    int ans=11*cnt;
    int l=0,r=n-1;
    while(s[l]=='0')l++;
    while(s[r]=='0')r--;
    r=n-1-r;
    if(cnt==1)
    {
        if(r<=k)ans-=10;
        else if(l<=k)ans-=1;
    }
    else
    {
        if(l+r<=k)ans-=11;
        else if(r<=k)ans-=10;
        else if(l<=k)ans-=1;
    }
    cout<<ans<<nl;
}

signed main()
{
    int _(1);
    cin >> _;
    for (int tc = 1; tc <= _; tc++)
    {
        // printf("Case %d: ",tc);
        solve();
    }
    return 0;
}