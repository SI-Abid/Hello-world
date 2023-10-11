#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    vector<vector<char>> grid = vector<vector<char>>(9, vector<char>(9));
    for (size_t i = 0; i < 9; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            string s;
            cin >> s;
            for (size_t k = 0; k < 3; k++)
            {
                grid[i][3 * j + k] = s[k];
            }
        }
    }
    int u, v;
    cin >> u >> v;
    bool isEmpty = false;
    u = (u - 1) % 3;
    v = (v - 1) % 3;
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            if (grid[3 * u + i][3 * v + j] == '.')
                isEmpty = true;
        }
    }
    if (isEmpty)
    {
        for (size_t i = 0; i < 3; i++)
        {
            for (size_t j = 0; j < 3; j++)
            {
                if (grid[3 * u + i][3 * v + j] == '.')
                    grid[3 * u + i][3 * v + j] = '!';
            }
        }
    }
    else
    {
        for (size_t i = 0; i < 9; i++)
        {
            for (size_t j = 0; j < 9; j++)
            {
                if (grid[i][j] == '.')
                    grid[i][j] = '!';
            }
        }
    }
    for (size_t i = 0; i < 9; i++)
    {
        for (size_t j = 0; j < 9; j++)
        {
            cout << grid[i][j];
            if (j % 3 == 2)
                cout << " ";
        }
        cout << nl;
        if (i % 3 == 2)
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