#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;
    int small = min_element(a.begin(), a.end()) - a.begin();
    cout << n - 1 << nl;
    for (int i = 0; i < n; i++)
    {
        if (i != small)
        {
            cout << i + 1 << ' ' << small + 1 << ' ' << a[small] + abs(i - small) << ' ' << a[small] << '\n';
        }
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