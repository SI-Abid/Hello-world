#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;cin>>n;map<int,int> mp;for(int i=0;i<n;i++){int x;cin>>x;mp[x]++;}
    int mx= max_element(mp.begin(),mp.end(),[](auto a,auto b){return a.second<b.second;})->second;
    if(mx>n/2)
    {
        cout<< mx - (n-mx) <<nl;
    }
    else
    {
        cout<< n%2 <<nl;
    }
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