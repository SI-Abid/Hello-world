#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &aa : a)
        cin >> aa;
    sort(a.begin(), a.end());
    vector<bool> done(n + 1, false);

    for (auto &A : a)
    {
        if (A <= n and !done[A])
        {
            done[A] = true;
            A = -1;
        }
    }
    int cur = 1, ans = 0;
    for (auto &A : a)
    {
        if (A < 0)
            continue;
        while (cur <= n and done[cur])
            cur++;
        if (cur <= n and 2 * cur < A)
        {
            done[cur] = true;
            ans++;
        }
    }
    while (cur <= n and done[cur])
        cur++;
    if (cur <= n)
        puts("-1");
    else
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