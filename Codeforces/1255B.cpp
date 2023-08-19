#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;
    if (n != m or n==2)
    {
        puts("-1");
        return;
    }
    cout << accumulate(a.begin(), a.end(), 0) * 2 << nl;
    for (int i = 1; i <= n; i++)
    {
        cout << i << " " << ((i + n) % n) + 1 << nl;
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