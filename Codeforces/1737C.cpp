#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

double dist(double x1, double y1, int x2, int y2)
{
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

pair<int, int> mid(int r1, int c1, int r2, int c2, int r3, int c3)
{
    double mx, my;
    mx = (r1 + r2 + r3) / 3.0;
    my = (c1 + c2 + c3) / 3.0;
    int x, y;
    double dis = dist(mx, my, r1, c1);
    x = r1, y = c1;
    if (dist(mx, my, r2, c2) < dis)
    {
        dis = dist(mx, my, r2, c2);
        x = r2, y = c2;
    }
    if (dist(mx, my, r3, c3) < dis)
    {
        dis = dist(mx, my, r3, c3);
        x = r3, y = c3;
    }
    return {x, y};
}

bool isCorner(int x, int y, int n)
{
    auto p = make_pair(x, y);
    auto a = make_pair(1, n);
    auto b = make_pair(1, 1);
    auto c = make_pair(n, n);
    auto d = make_pair(n, 1);
    return p == a or p == b or p == c or p == d;
}

void solve()
{
    int n;
    cin >> n;
    int r1, c1, r2, c2, r3, c3;
    cin >> r1 >> c1 >> r2 >> c2 >> r3 >> c3;
    int x, y;
    cin >> x >> y;
    int r0 = (r1 ^ r2 ^ r3);
    int c0 = (c1 ^ c2 ^ c3);
    vector<pair<int, int>> corners = {{1, 1}, {1, n}, {n, 1}, {n, n}};
    for (auto [i, j] : corners)
    {
        if ((r1 == i and c1 == j) or (r2 == i and c2 == j) or (r3 == i and c3 == j))
        {
            if (r0 != i and c0 != j)
            {
                cout << (x == i or y == j ? "YES" : "NO") << '\n';
                return;
            }
        }
    }
    auto [xx, yy] = mid(r1, c1, r2, c2, r3, c3);
    int dx = abs(xx - x);
    int dy = abs(yy - y);
    if ((dx & 1 and dy & 1))
        puts("NO");
    else
        puts("YES");
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