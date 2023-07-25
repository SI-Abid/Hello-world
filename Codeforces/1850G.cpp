#include <bits/stdc++.h>
using namespace std;

signed main()
{
    using ll = long long;
    int _;
    cin >> _;
    for (int tc = 1; tc <= _; tc++)
    {
        // printf("Case %d: ",tc);

        int n;
        cin >> n;
        map<int, ll> vert, hor, diag1, diag2;
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            vert[x]++;
            hor[y]++;
            diag1[x + y]++;
            diag2[x - y]++;
        }
        ll ans = 0;
        for (auto [k, v] : vert)
            ans += v * (v - 1);
        for (auto [k, v] : hor)
            ans += v * (v - 1);
        for (auto [k, v] : diag1)
            ans += v * (v - 1);
        for (auto [k, v] : diag2)
            ans += v * (v - 1);
        cout << ans << "\n";
    }
    return 0;
}