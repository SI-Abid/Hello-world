#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int _ = 1;
    // cin>>_;
    for (int tc = 1; tc <= _; tc++)
    {
        // printf("Case %d: ",tc);

        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a[i] -= x;
        }
        sort(a.begin(), a.end());
        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            auto it = lower_bound(a.begin(), a.end(), -a[i] + 1);
            
                int j = it - a.begin();
                // cout << i << ' ' << j << '\n';
                ans += max(0, i - j);
            
        }
        cout << ans << '\n';
    }
    return 0;
}