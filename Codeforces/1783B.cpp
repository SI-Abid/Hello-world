#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    int x = n * n;
    vector<vector<int>> v;
    bool zor = 0;
    int i = 1;
    while (i <= x)
    {
        if (v.empty() or v.back().size() == n)
        {
            v.emplace_back();
        }
        if (zor)
        {
            v.back().push_back(i++);
        }
        else
        {
            v.back().push_back(x--);
        }
        zor = !zor;
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (i % 2 == 1)
            reverse(v[i].begin(), v[i].end());
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << nl;
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