#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int _;
    cin >> _;
    for (int tc = 1; tc <= _; tc++)
    {
        // printf("Case %d: ",tc);

        int n, m;
        cin >> n >> m;
        vector<pair<int, int>> lr(m);
        for (auto &[l, r] : lr)
            cin >> l >> r;

        int q;
        cin >> q;
        vector<int> b(q);
        for (auto &i : b)
            cin >> i;

        int lo = 0, hi = q;
        while (lo != hi)
        {
            int mid = (lo + hi) / 2;

            vector<int> a(n + 1, -1);
            for (int i = 0; i <= mid; i++)
                a[b[i]] = 1;
            a[0] = 0;
            for (int i = 1; i <= n; i++)
                a[i] += a[i - 1];
            bool flag = false;
            for (auto [l, r] : lr)
            {
                if (a[r] - a[l - 1] > 0)
                {
                    flag = true;
                    break;
                }
            }
            if (flag)
                hi = mid;
            else
                lo = mid + 1;
        }
        if (lo == q)
            cout << "-1\n";
        else
            cout << lo + 1 << '\n';
    }
    return 0;
}