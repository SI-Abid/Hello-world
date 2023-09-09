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
    sort(a.begin(), a.end());
    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] > a[i - 1])
            continue;
        int dif = a[i - 1] - a[i] + 1;
        ans += dif;
        a[i] += dif;
    }
    cout << ans;
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