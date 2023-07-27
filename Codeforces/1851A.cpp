#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int _;
    cin >> _;
    for (int tc = 1; tc <= _; tc++)
    {
        // printf("Case %d: ",tc);

        int n, m, k, h;
        cin >> n >> m >> k >> h;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (abs(x - h) % k == 0 and abs(x - h) / k < m and h!=x)
            {
                // cout << x << " ";
                ans++;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}