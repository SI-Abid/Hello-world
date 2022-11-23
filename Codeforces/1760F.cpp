#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
signed main()
{
    int _;
    cin >> _;
    for (int tc = 1; tc <= _; tc++)
    {
        // printf("Case %d: ",tc);

        ll n, c, d;
        cin >> n >> c >> d;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.rbegin(), v.rend());
        int l = 0, r = d + 2;
        ll sum;
        while (l < r)
        {
            int mid = l + (r - l + 1) / 2;
            sum = 0;
            for (int i = 0; i < d; i++)
            {
                if (i % mid < n)
                    sum += v[i % mid];
            }
            if (sum >= c)
            {
                l = mid;
            }
            else
                r = mid - 1;
        }
        l == 0 ? cout << "Impossible\n" : l == d + 2 ? cout << "Infinity\n"
                                                     : cout << l - 1 << '\n';
    }
    return 0;
}