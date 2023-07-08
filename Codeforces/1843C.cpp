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
        ll n;
        cin >> n;
        ll ans = 0;
        while (n > 0)
        {
            ans += n;
            n >>= 1;
        }
        cout << ans << '\n';
    }
    return 0;
}