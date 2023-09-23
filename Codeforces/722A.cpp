#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int format, hh, mm;
    scanf("%d%d%*c%d", &format, &hh, &mm);
    mm %= 60;
    if (format == 12)
    {
        if (hh > 12)
        {
            if (hh % 10 == 0)
                hh = 10;
            else
                hh %= 10;
        }
        if (hh == 0)
            hh++;
    }
    else if (hh >= 24)
        hh %= 10;
    printf("%02d:%02d\n", hh, mm);
}

signed main()
{
    int _(1);
    // cin >> _;
    for (int tc = 1; tc <= _; tc++)
    {
        // printf("Case %d: ",tc);
        solve();
    }
    return 0;
}