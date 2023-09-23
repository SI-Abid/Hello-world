#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (auto &x : a)
        cin >> x;
    for (auto &x : b)
        cin >> x;
    if (a == b)
    {
        puts("YES");
        return;
    }
    a.push_back(a[0]);
    b.push_back(b[0]);
    bool ok = 1;
    for (size_t i = 0; i < n; i++)
    {
        if (a[i] > b[i] or (a[i] < b[i] and b[i] - b[i + 1] > 1))
            ok = 0;
    }
    puts(ok ? "YES" : "NO");
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