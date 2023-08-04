#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n, m;
    cin >> n;
    vector<int> a(n);
    for (int &x : a)
        cin >> x;
    cin >> m;
    vector<int> b(m);
    for (int &x : b)
        cin >> x;
    int ans = 0;
    vector<int> sum(n + 1, 0);
    for (int i = 1; i <= n; i++)
        sum[i] = sum[i - 1] + a[i - 1];
    for (int &x : b)
    {
        auto it = lower_bound(sum.begin(), sum.end(), x);
        int idx = it - sum.begin();
        cout << idx << nl;
    }
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