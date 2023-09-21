#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

bool blackFree(int i, int j, vector<string> &v)
{
    for (; i < 8; i++)
    {
        if (v[i][j] != '.')
            return false;
    }
    return true;
}
bool whiteFree(int i, int j, vector<string> &v)
{
    for (; i >= 0; i--)
    {
        if (v[i][j] != '.')
            return false;
    }
    return true;
}

void solve()
{
    vector<string> brd(8);
    for (auto &s : brd)
        cin >> s;
    int a, b;
    a = b = 10;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (brd[i][j] == 'B' and blackFree(i+1, j, brd))
            {
                b = min(8 - i - 1, b);
            }
            if (brd[i][j] == 'W' and whiteFree(i-1, j, brd))
            {
                a = min(i, a);
            }
        }
    }
    // cout << a << " " << b << nl;
    puts(b < a ? "B" : "A");
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