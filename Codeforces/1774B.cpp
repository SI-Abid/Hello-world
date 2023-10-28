#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(m);
    for (auto &x : a)
        cin >> x;
    sort(a.rbegin(), a.rend());
    int lim = n / k + 1;
    int rem = n % k;
    for (auto x : a)
    {
        if (rem == 0)
            lim--;
        rem--;
        if (x > lim)
        {
            puts("NO");
            return;
        }
    }
    puts("YES");
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