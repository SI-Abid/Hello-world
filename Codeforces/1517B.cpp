#include <bits/stdc++.h>
using namespace std;
signed main()
{
    int _;
    scanf("%d", &_);
    for (int tc = 1; tc <= _; tc++)
    {
        // printf("Case %d: ",tc);

        int n, m;
        scanf("%d%d", &n, &m);
        vector<vector<int>> a(n, vector<int>(m));
        vector<vector<int>> ans(n);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                cin >> a[i][j];
            sort(a[i].begin(), a[i].end());
        }
        for (size_t i = 0; i < m; i++)
        {
            int mn = INT_MAX;
            int idx = -1;
            for (size_t j = 0; j < n; j++)
            {
                if (a[j][0] < mn)
                {
                    mn = a[j][0];
                    idx = j;
                }
            }
            for (size_t j = 0; j < n; j++)
            {
                if (j == idx)
                {
                    ans[j].push_back(a[j][0]);
                    a[j].erase(a[j].begin());
                }
                else
                {
                    ans[j].push_back(a[j].back());
                    a[j].pop_back();
                }
            }
        }

        for (size_t i = 0; i < n; i++)
        {
            for (size_t j = 0; j < m; j++)
                printf("%d ", ans[i][j]);
            puts("");
        }
    }
    return 0;
}