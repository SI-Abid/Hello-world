#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

bool rec(vector<int> &v, int i, int sum, int n)
{
    if (i == n)
        return sum % 360 == 0;
    return rec(v, i + 1, sum + v[i], n) or rec(v, i + 1, sum - v[i], n);
}

void solve()
{
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    cout<<(rec(v,0,0,n)?"YES":"NO")<<nl;
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