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
        vector<int> a(n);
        map<int, int> cnt;
        for (auto &x:a)
        {
            cin>>x;
            cnt[x]++;
        }
        int ans = 0;
        sort(a.begin(), a.end());
        for (int x=1;x<=n;x++)
        {
            int tmp = 0;
            for (int j = 1; j * j <= x; j++)
            {
                if (x % j == 0)
                {
                    tmp += cnt[j];
                    if (j * j != x)
                        tmp += cnt[x / j];
                }
            }
            ans = max(ans, tmp);
        }
        cout << ans << "\n";
    }
    return 0;
}