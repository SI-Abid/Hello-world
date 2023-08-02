#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    ll n, x, y;
    cin >> n >> x >> y;
    string a, b;
    cin >> a >> b;
    if(a==b)
    {
        cout << "0" << nl;
        return;
    }
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
            v.push_back(i);
    }
    if (v.size() % 2 == 1)
    {
        cout << "-1" << nl;
        return;
    }
    ll ans = 0;
    if(v.size()>2)
    {
        ans = (v.size() / 2)*y;
        cout<< ans << nl;
        return;
    }
    if(v[0]+1==v[1])
    {
        ans = min(y+y,x);
    }
    else
    {
        ans = y;
    }
    cout << ans << nl;
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