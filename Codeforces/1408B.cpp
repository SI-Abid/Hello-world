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
    int dif = 1;
    for (int i = 0; i < n - 1; i++)
    {
        dif += (a[i] != a[i + 1]);
    }
    if (k == 1)
    {
        puts(dif == 1 ? "1" : "-1");
    }
    else
    {
        cout << max(1, (dif - 1 + (k - 2)) / (k - 1)) << nl;
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