#include <bits/stdc++.h>
using namespace std;

signed main()
{
    using ll = long long;
    int _;
    cin >> _;
    set<ll> ok;
    for (ll i = 2; i <= 1000000; i++)
    {
        ll ans = 1 + i;
        for (int j = 2; j <= 1000000; j++)
        {
            ll ith = 1;
            for (int k = 1; k <= j; k++)
            {
                ith *= i;
            }
            ans += ith;
            if (ans > 1e6)
                break;
            ok.insert(ans);
        }
    }
    // cout << ok.size() << endl;
    // for (auto i : ok)
    // {
    //     cout << i << endl;
    // }
    // return 0;
    for (int tc = 1; tc <= _; tc++)
    {
        // printf("Case %d: ",tc);

        int n;
        cin >> n;
        if (*ok.lower_bound(n) == n)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}