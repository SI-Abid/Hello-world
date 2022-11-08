#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n, m, cap;
    cin >> n >> m >> cap;
    vector<vector<int>> a(n, vector<int>(m)), b(n, vector<int>(m)), c(n, vector<int>(m));
    vector<string> planet(n);
    for (int i = 0; i < n; i++)
    {
        cin >> planet[i];
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j] >> b[i][j] >> c[i][j];
        }
    }
    int ans = 0;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if (i == j)
            {
                continue;
            }
            vector<int> taka, avail;
            for (size_t k = 0; k < m; k++)
            {
                taka.push_back(max(0, b[j][k] - a[i][k]));
                avail.push_back(c[i][k]);
            }
            vector<int> tmp(cap+1, 0);
            for (size_t k = 0; k < m; k++)
            {
                for (size_t l = 1; l <= avail[k]; l++)
                {
                    for (int x = cap; x > 0; x--)
                    {
                        tmp[x] = max(tmp[x], tmp[x - 1] + taka[k]);
                    }
                }
            }
            ans = max(ans, *max_element(tmp.begin(), tmp.end()));
            // cout<<ans<<"\n";
        }
    }
    cout << ans << "\n";
    return 0;
}