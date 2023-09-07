#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n, m, q;
    cin >> n >> m >> q;
    vector<vector<int>> a(n, vector<int>(m, 0));
    pair<int, int> idx[1000][1000];
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            idx[i][j] = {i, j};
        }
    }

    while (q--)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            // shift row
            int x;
            cin >> x;
            x--;
            // auto p=idx[x][0];
            for (int i = 1; i < m; i++)
            {
                swap(idx[x][i], idx[x][i - 1]);
            }
        }
        else if (t == 2)
        {
            int x;
            cin >> x;
            x--;
            for (int i = 1; i < n; i++)
            {
                swap(idx[i][x], idx[i - 1][x]);
            }
        }
        else
        {
            int r, c, x;
            cin >> r >> c >> x;
            r--;
            c--;
            a[idx[r][c].first][idx[r][c].second] = x;
        }
    }
    for (auto row : a)
    {
        for (auto col : row)
            cout << col << ' ';
        cout << nl;
    }
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