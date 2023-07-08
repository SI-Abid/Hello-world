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
        vector<set<int>> a(n + 1);
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            a[x].insert(i);
            a[i].insert(x);
        }
        vector<int> vis(n + 1, 0);
        int cycle = 0;
        int non_cycle = 0;
        for (int i = 1; i <= n; i++)
        {
            if (vis[i] == 0)
            {
                queue<int> q;
                q.push(i);
                vis[i] = 1;
                vector<int> nodes = {i};
                while (!q.empty())
                {
                    int u = q.front();
                    q.pop();
                    for (auto v : a[u])
                    {
                        if (vis[v] == 0)
                        {
                            vis[v] = 1;
                            q.push(v);
                            nodes.push_back(v);
                        }
                    }
                }
                bool flag = false;
                for (auto x : nodes)
                {
                    if (a[x].size() == 1)
                    {
                        flag = true;
                        break;
                    }
                }
                if (flag)
                {
                    non_cycle++;
                }
                else
                {
                    cycle++;
                }
            }
        }
        // cout<<cycle<<" "<<non_cycle<<endl;
        cout << cycle + min(non_cycle, 1) << " " << cycle + non_cycle << endl;
    }
    return 0;
}