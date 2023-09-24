#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;cin>>n;
    vector<string> vs(n);
    for(auto &x:vs)cin>>x;
    bool odd=0;
    int zero=0;
    for (auto s:vs)
    {
        zero+=count(s.begin(),s.end(),'0');
        if(s.size()%2) odd=true;
    }
    cout<<(odd or zero%2==0?n:n-1)<<nl;
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