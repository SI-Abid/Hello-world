#include <bits/stdc++.h>
using namespace std;

signed main()
{
    using ll = long long;
    int _;
    cin >> _;
    for (int tc = 1; tc <= _; tc++)
    {
        // printf("Case %d: ",tc);

        int ax, ay, bx, by, cx, cy;
        cin >> ax >> ay >> bx >> by >> cx >> cy;
        ll dx1, dy1, dx2, dy2;
        dx1 = ax - bx;
        dy1 = ay - by;
        dx2 = ax - cx;
        dy2 = ay - cy;
        int ans = 1;
        if (dx1 * dx2 > 0)
        {
            ans += min(abs(dx1), abs(dx2));
        }
        if (dy1 * dy2 > 0)
        {
            ans += min(abs(dy1), abs(dy2));
        }
        cout << ans << endl;
    }
    return 0;
}