#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
bool check(int u, int v, vector<vector<int>> &a)
{
    for (auto row : a)
    {
        swap(row[u - 1], row[v - 1]);
        if (!is_sorted(row.begin(), row.end()))
            return false;
    }
    return true;
}
void solve()
{
    int n, m;
    cin >> n >> m;
    set<int> idx;
    vector<vector<int>> a(n, vector<int>(m));
    for (auto &row : a)
        for (auto &col : row)
            cin >> col;
    for (auto &row : a)
    {
        vector<int> sow = row;
        sort(sow.begin(), sow.end());
        for (int i = 0; i < m; i++)
        {
            if (sow[i] != row[i])
                idx.insert(i + 1);
        }
        if (idx.size() > 2)
        {
            puts("-1");
            return;
        }
        if (idx.size() == 2)
        {
            auto it = idx.begin();
            int i = *it;
            it++;
            int j = *it;
            // cout << i << " -- " << j << nl;
            if (check(i, j, a))
                cout << i << " " << j << nl;
            else
                puts("-1");
            return;
        }
    }
    if (idx.empty())
        cout << "1 1\n";
    // else
    //     for (auto x : idx)
    //         cout << x << ' ';
    // cout << nl;
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