#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n, k;
    int a, b;
    cin >> n >> k >> a >> b;
    vector<pair<int, int>> p(n);
    for (size_t i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        p[i] = {a * x + b * y, i+1};
    }
    sort(p.begin(), p.end());
    ll cap=0;
    vector<int>ans;
    int i=0;
    while(i<n and cap+p[i].first<=k)
    {
        cap+=p[i].first;
        ans.push_back(p[i].second);
        i++;
    }
    cout<<ans.size()<<nl;
    for(auto x:ans)cout<<x<<" ";
}

signed main()
{
    int _(1);
    // cin >> _;
    for (int tc = 1; tc <= _; tc++)
    {
        // printf("Case %d: ",tc);
        solve();
    }
    return 0;
}