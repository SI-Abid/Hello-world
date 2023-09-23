#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<char>> grid(n, vector<char>(m));
    for (auto &&row : grid)
        for (auto &cell : row)
            cin >> cell;

    vector<vector<int>> width(n, vector<int>(m, INT_MAX));

    for (size_t i = 0; i < n; i++)
    {
        int cnt = 0;
        for (size_t j = 0; j < m; j++)
        {
            cnt = grid[i][j] == '*' ? cnt + 1 : 0;
            width[i][j] = min(width[i][j], cnt);
        }
        cnt = 0;
        for (int j = m - 1; j >= 0; j--)
        {
            cnt = grid[i][j] == '*' ? cnt + 1 : 0;
            width[i][j] = min(width[i][j], cnt);
        }
    }

    int ans = 0;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            for (size_t k = i; k < n; k++)
            {
                if (width[k][j] <= k - i)
                    break;
                ans++;
            }
        }
    }
    cout << ans << nl;
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