#include <bits/stdc++.h>
using namespace std;

bool check(vector<vector<char>> &v, char c)
{
    for (int i = 0; i < 3; i++)
    {
        if (v[i][0] == c && v[i][1] == c && v[i][2] == c)
            return true;
        if (v[0][i] == c && v[1][i] == c && v[2][i] == c)
            return true;
    }
    if (v[0][0] == c && v[1][1] == c && v[2][2] == c)
        return true;
    if (v[0][2] == c && v[1][1] == c && v[2][0] == c)
        return true;
    return false;
}

signed main()
{
    int _;
    cin >> _;
    for (int tc = 1; tc <= _; tc++)
    {
        // printf("Case %d: ",tc);

        vector<vector<char>> v(3, vector<char>(3));
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                cin >> v[i][j];

        vector<char> c = {'X', 'O', '+'};
        for (auto cc : c)
        {
            if (check(v, cc))
            {
                cout << cc << endl;
                goto end;
            }
        }
        cout << "DRAW" << endl;
    end:;
    }
    return 0;
}