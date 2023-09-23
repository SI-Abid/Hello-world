#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;
    sort(a.begin(), a.end());
    int dead = 0;
    for (size_t i = 0; i < n; i++)
    {
        auto it = lower_bound(a.begin(), a.end(), a[i] + 1);
        auto ij = upper_bound(a.begin(), a.end(), a[i] + k);
        if (it < ij)
            dead++;
    }
    cout << n - dead;
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