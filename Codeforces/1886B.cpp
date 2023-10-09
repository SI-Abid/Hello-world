#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

double dist(double ax, double ay, double bx, double by)
{
    double dx = abs(ax - bx);
    double dy = abs(ay - by);
    return sqrt(dx * dx + dy * dy);
}

void solve()
{
    double px, py, ax, ay, bx, by;
    cin >> px >> py >> ax >> ay >> bx >> by;
    double originA = dist(0, 0, ax, ay);
    double originB = dist(0, 0, bx, by);
    double ptoa = dist(px, py, ax, ay);
    double ptob = dist(px, py, bx, by);
    double atob = dist(ax, ay, bx, by);
    double ans;
    if (ptoa < ptob and originA < originB)
    {
        // puts("1");
        ans = max({ptoa, originA});
    }
    else if (ptob < ptoa and originB < originA)
    {
        ans = max({ptob, originB});
    }
    else
    {
        ans = max({atob / 2.0, min(ptoa, ptob), min(originA, originB)});
    }
    cout << setprecision(11) << ans << nl;
}

signed main()
{
    int _(1);
    cin >> _;
    for (int tc = 1; tc <= _; tc++)
    {
        // printf("Case %d: ",tc);
        solve();
    }
    return 0;
}