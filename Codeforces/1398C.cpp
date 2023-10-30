#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;string s;
    cin>>n>>s;
    map<int,int> mp;
    mp[0]=1;
    int sum=0;
    ll total=0;
    for (int i = 0; i < n; i++)
    {
        sum+= (s[i]-'0')-1;
        total+= mp[sum]++;
    }
    cout<<total<<nl;
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