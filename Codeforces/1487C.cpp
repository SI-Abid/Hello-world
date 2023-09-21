#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void setEdge(int u, int v, int c, vector<vector<int>> &adj)
{
    adj[u][v] = c;
    adj[v][u] = -c;
}

void solve()
{
    int n;
    cin >> n;
    map<int, int> mp;
    if (n & 1)
    {
        int k = n / 2;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (mp[i] < k)
                {
                    cout << "1 ";
                    mp[i]++;
                }
                else
                {
                    cout << "-1 ";
                }
            }
        }
    }
    else
    {
        int k = n / 2 - 1;
        for (int i = 0; i < n; i++)
        {
            int c = 0, p = 0;
            for (int j = i + 1; j < n; j++)
            {
                if (i % 2 == 0 and j - 1 == i)
                {
                    cout << "0 ";
                    c++;
                }
                else if (c)
                {
                    if (p < (n - i - 1) / 2)
                    {
                        cout << "1 ";
                    }
                    else
                        cout << "-1 ";
                    p++;
                }
                else
                {
                    if (p < (n - i - 1) / 2)
                    {
                        cout << "-1 ";
                    }
                    else
                        cout << "1 ";
                    p++;
                }
            }
        }
    }
    cout << nl;
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