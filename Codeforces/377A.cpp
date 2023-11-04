#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void print(vector<string> a)
{
    for (auto s : a)
        cout << s << nl;
}

int n, m, k;
vector<string> v;
bool u[510][510];

void dfs(int x, int y)
{
    u[x][y] = true;
    if (x > 0)
    {
        if (v[x - 1][y] == '.' && !u[x - 1][y])
            dfs(x - 1, y);
    }
    if (x < n - 1)
    {
        if (v[x + 1][y] == '.' && !u[x + 1][y])
            dfs(x + 1, y);
    }
    if (y > 0)
    {
        if (v[x][y - 1] == '.' && !u[x][y - 1])
            dfs(x, y - 1);
    }
    if (y < m - 1)
    {
        if (v[x][y + 1] == '.' && !u[x][y + 1])
            dfs(x, y + 1);
    }
    if (k > 0)
    {
        v[x][y] = 'X';
        k--;
    }
}

void solve()
{
    cin >> n >> m >> k;
    v.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (v[i][j] == '.')
            {
                dfs(i, j);
                return print(v);
            }
        }
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