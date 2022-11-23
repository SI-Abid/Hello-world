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
        while (cnt2 > cnt5)
        {
            if (ans * 5LL > m)
                break;
            ans *= 5;
            cnt2--;
        }
        while (cnt5 > cnt2)
        {
            if (ans * 2LL > m)
                break;
            ans *= 2;
            cnt5--;
        }
        while (1)
        {
            if (ans * 10LL > m)
                break;
            ans *= 10;
        }
        ans *= (m / ans);
        ll ANS = ans * N;
        if (ANS % 10 != 0)
        {
            ANS = n * m;
        }
        cout << ANS << " " << endl;
    }
    return 0;
}