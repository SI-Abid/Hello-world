#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    string s;
    char a,b;
    a=b='#';
    cin>>s;
    int ans=0;
    for(auto &c:s)
    {
        if(a==c or b==c)
        {
            ans++;
            c='#';
        }
        a=b;
        b=c;
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