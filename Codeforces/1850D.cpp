#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int _;
    cin >> _;
    for (int tc = 1; tc <= _; tc++)
    {
        // printf("Case %d: ",tc);

        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());

        int ans = 0;

        for (int i = 1; i < n; i++)
        {
            int tmp = 0;
            if (a[i] - a[i - 1] > k)
                continue;
            while (i < n and a[i] - a[i - 1] <= k)
            {
                tmp++;
                i++;
            }
            // i--;
            ans = max(ans, tmp);
        }
        cout << n - ans - 1 << "\n";
    }
    return 0;
}