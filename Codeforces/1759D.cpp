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

        ll n, m;
        cin >> n >> m;
        ll N = n;
        ll ans = 1;
        ll cnt2, cnt5;
        cnt2 = cnt5 = 0;
        while (n % 2 == 0)
        {
            cnt2++;
            n /= 2;
        }
        while (n % 5 == 0)
        {
            cnt5++;
            n /= 5;
        }
        while (cnt2 < cnt5 and 2 * ans <= m)
        {
            ans *= 2;
            cnt2++;
        }
        while (cnt5 < cnt2 and 5 * ans <= m)
        {
            ans *= 5;
            cnt5++;
        }
        while (ans * 10 <= m)
        {
            ans *= 10;
        }
        if (ans == 1)
        {
            cout << (N * m) << '\n';
        }
        else
        {
            ans *= (m / ans);
            cout << (N * ans) << '\n';
        }
    }
    return 0;
}