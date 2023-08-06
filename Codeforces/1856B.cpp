#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
vector<string> ans = {"NO\n", "YES\n"};

void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    ll som = 0;
    int one = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        one += (a[i] == 1);
        som += a[i];
    }
    if (n == 1)
    {
        cout << "NO\n";
        return;
    }
    ll minsum = one + n;
    cout << ans[som >= minsum];
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