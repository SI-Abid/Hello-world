#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

char next(char c)
{
    return c=='A'?'B':c=='B'?'C':'A';
}

void solve()
{
    vector<string> vs(3);
    for (auto &x : vs)
        cin >> x;
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            if (vs[i][j] == '?')
            {
                if (j == 0)
                    cout << next(vs[i][2]) << nl;
                else
                    cout << next(vs[i][j - 1]) << nl;
            }
        }
    }
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