#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int _;
    cin >> _;
    for (int tc = 1; tc <= _; tc++)
    {
        // printf("Case %d: ",tc);

        int n;
        cin >> n;
        vector<vector<int>> a(n + 1);
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            a[x].push_back(y);
        }
        for (int i = 1; i <= n; i++)
        {
            sort(a[i].begin(), a[i].end(), greater<int>());
        }
        long long ans = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j < a[i].size() and j < i; j++)
            {
                ans += a[i][j];
            }
        }
        cout << ans << endl;
    }
    return 0;
}