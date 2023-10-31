#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
const int BITS=30;
void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    vector<vector<int>> locations(BITS + 1);
 
    for (auto &x : a)
        cin >> x;
 
    for (int i = 0; i < n; i++)
        locations[__builtin_ctz(a[i])].push_back(i);
 
    for (int i = 0; i < q; i++) {
        int x;
        cin >> x;
 
        for (int y = x; y <= BITS; y++) {
            for (int index : locations[y]) {
                a[index] += 1 << (x - 1);
                locations[x - 1].push_back(index);
            }
 
            locations[y].clear();
        }
    }
    for(auto x:a)cout<<x<<" ";
    cout<<nl;
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