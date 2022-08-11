#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    for (int tc = 1; tc <= t; tc++)
    {

        int m;
        cin >> m;
        vector<vector<int>> v(2, vector<int>(m));
        for (int i = 0; i < m; i++)
        {
            cin >> v[0][i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> v[1][i];
        }
        long long ans = 0;
        long long tmp = 0;
        for (int i = 1; i < m; i++)
        {
            if (v[0][i] > tmp)
            {
                // tmp++;
                tmp += (v[0][i] - tmp);
                // continue;
            }
            tmp++;
        }
        for (int i = m - 1; i >= 0; i--)
        {
            if (v[1][i] > tmp)
            {
                // tmp++;
                tmp += (v[1][i] - tmp);
                // continue;
            }
            tmp++;
        }
        // 2nd way
        if (v[1][0] > ans)
        {
            ans = v[1][0];
        }
        ans++;
        for (int i = 1; i < m; i++)
        {
            if (v[1][i] > ans)
            {
                ans = v[1][i];
            }
            ans++;
        }
        for (int i = m - 1; i > 0; i--)
        {
            if (v[0][i] > ans)
            {
                ans = v[0][i];
            }
            ans++;
        }
        // ans=min(ans,tmp);
        // 3rd way
        long long zigzag = 0;
        int i, j;
        i = 0, j = 0;
        while (true)
        {
            if (v[i][j] > zigzag)
            {
                zigzag += v[i][j] - zigzag;
            }
            zigzag++;
            if (i == (m % 2) and j == m - 1)
            {
                break;
            }
            i++;
            if (v[i][j] > zigzag)
            {
                zigzag += v[i][j] - zigzag;
            }
            zigzag++;
            if (i == (m % 2) and j == m - 1)
            {
                break;
            }
            j++;
            if (v[i][j] > zigzag)
            {
                zigzag += v[i][j] - zigzag;
            }
            zigzag++;
            if (i == (m % 2) and j == m - 1)
            {
                break;
            }
            i--;
            if (v[i][j] > zigzag)
            {
                zigzag += v[i][j] - zigzag;
            }
            zigzag++;
            if (i == (m % 2) and j == m - 1)
            {
                break;
            }
            j++;
        }
        cout << min({tmp, ans, zigzag}) << endl;
        // cout<<tmp<<" "<<ans<<" "<<zigzag<<endl;
    }
    return 0;
}