#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

vector<string> ans = {"NO", "YES"};

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<string> room(n);
    for (auto &x : room)
        cin >> x;
    int ANS = 0;
    for (int x1 = 0; x1 < n; x1++)
    {
        for (int x2 = x1; x2 < n; x2++)
        {
            for (int y1 = 0; y1 < m; y1++)
            {
                for (int y2 = y1; y2 < m; y2++)
                {
                    bool allZero = true;
                    for (int i = x1; i <= x2; i++)
                    {
                        for (int j = y1; j <= y2; j++)
                        {
                            allZero &= (room[i][j] == '0');
                        }
                    }
                    if (allZero)
                    {
                        int x = x2 - x1 + 1;
                        int y = y2 - y1 + 1;
                        ANS = max(ANS, x + y + x + y);
                    }
                }
            }
        }
    }
    cout << ANS << nl;
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