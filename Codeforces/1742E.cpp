#include <bits/stdc++.h>
using namespace std;

signed main()
{
    long long t;
    cin >> t;
    for (long long tc = 1; tc <= t; tc++)
    {
        long long n, q;
        cin >> n >> q;
        vector<long long> a(n);
        long long biggest = 0;
        vector<long long> aa;
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
            biggest = max(biggest, a[i]);
            aa.push_back(biggest);
        }

        vector<long long> pre(n + 1);
        pre[0] = 0;
        for (long long i = 1; i <= n; i++)
        {
            pre[i] = pre[i - 1] + a[i - 1];
        }
        while (q--)
        {
            long long k;
            cin >> k;
            size_t ans = upper_bound(aa.begin(), aa.end(), k) - aa.begin();
            cout<<pre[ans]<<' ';
        }
        cout << '\n';
    }
    return 0;
}