#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int _;
    cin >> _;
    for (int tc = 1; tc <= _; tc++)
    {
        // printf("Case %d: ",tc);

        int n;
        cin >> n;
        vector<vector<int>> adj(n+1);
        vector<bool> visited(n, false);
        for (int i = 1; i < n; i++)
        {
            int x,y;
            cin >> x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        // no of components
        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            if (!visited[i])
            {
                ans++;
                queue<int> q;
                q.push(i);
                visited[i] = true;
                while (!q.empty())
                {
                    int x = q.front();
                    q.pop();
                    for (auto y : adj[x])
                    {
                        if (!visited[y])
                        {
                            visited[y] = true;
                            q.push(y);
                        }
                    }
                }
            }
        }
    }
    return 0;
}