#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n, w;
    cin >> n >> w;
    map<int, int> m;
    for (size_t i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        m[x]++;
    }
    int ans = 0;
    int l = w;
    while (max_element(m.begin(), m.end(), [](const std::pair<int, int> &p1, const std::pair<int, int> &p2)
                       { return p1.second < p2.second; })
               ->second > 0)
    {
        ans++;
        int cur = w;
        for (int b = 20; b >= 0; b--)
        {
            while (cur >= 1 << b and m[1 << b] > 0)
            {
                cur -= 1 << b;
                m[1 << b]--;
            }
        }
    }
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