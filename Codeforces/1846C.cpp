#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int _;
    cin >> _;
    for (int tc = 1; tc <= _; tc++)
    {
        // printf("Case %d: ",tc);

        int n, m, h;
        cin >> n >> m >> h;
        vector<vector<int>> v(n, vector<int>(m));
        vector<int> p(n);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                cin >> v[i][j];
            sort(v[i].begin(), v[i].end());
            p[i] = sum(v[i].begin(), v[i].end());
        }
        int 
        sort(p.begin(), p.end());
    }
    return 0;
}