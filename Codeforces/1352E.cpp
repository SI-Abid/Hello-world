#include <bits/stdc++.h>
using namespace std;

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int _;
    cin >> _;
    for (int tc = 1; tc <= _; tc++)
    {
        // printf("Case %d: ",tc);
        int n;
        cin >> n;
        vector<int> a(n + 1);
        vector<int> ans(n+1, 0);
        vector<int> pre(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i <= n; i++)
        {
            pre[i] = pre[i - 1] + a[i];
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = i + 1; j <= n and pre[j] - pre[i - 1] <= n; j++)
            {
                ans[pre[j] - pre[i - 1]]++;
            }
        }
        int aaaaaaaaaaaa = 0;
        for (int i = 1; i <= n; i++)
        {
            if (ans[a[i]] > 0)
            {
                aaaaaaaaaaaa++;
            }
        }
        cout << aaaaaaaaaaaa << endl;
    }
    return 0;
}