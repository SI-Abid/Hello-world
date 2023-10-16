#include <iostream>
#include <vector>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n, m, d;
    cin >> n >> m >> d;
    vector<int> a(m);
    for (auto &x : a)
        cin >> x, x--;
    auto cookies_between = [&](int x, int y) -> int
    {
        if (x >= y)
            return 0;

        return (y - x - 1) / d;
    };
    int tot = m;
    for (int i = 0; i < m; i++)
    {
        int bfr = i == 0 ? -d : a[i - 1];
        tot += cookies_between(bfr, a[i]);
    }

    tot += cookies_between(a.back(), n);
    int max = -1e9, choice = 0;
    for (int i = 0; i < m; i++)
    {
        int bfr = i == 0 ? -d : a[i - 1];
        int atr = i == m - 1 ? n : a[i + 1];
        int lost = cookies_between(bfr, a[i]) + 1 + cookies_between(a[i], atr) - cookies_between(bfr, atr);
        if (lost > max)
        {
            max = lost;
            choice = 1;
        }
        else if (lost == max)
        {
            choice++;
        }
    }
    cout << tot - max << " " << choice << nl;
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