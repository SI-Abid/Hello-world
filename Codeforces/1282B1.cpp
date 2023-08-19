#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n, p, k;
    cin >> n >> p >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for (int i = 2; i < n; i++)
    {
        a[i] += a[i - 2];
    }
    // for(auto i:a)cout<<i<<" ";
    // cout<<nl;
    auto it = upper_bound(a.begin(), a.end(), p);
    if (it == a.end())
        cout << n << nl;
    else
        cout << (it - a.begin()) << nl;
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