#include <bits/stdc++.h>
using namespace std;

template <typename T>
ostream &operator<<(ostream &os, const vector<T> &v)
{
    for(auto x:v)
        os<<x<<" ";
    return os;
}

signed main()
{
    int _;
    cin >> _;
    for (int tc = 1; tc <= _; tc++)
    {
        // printf("Case %d: ",tc);

        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int &x : a)
            cin >> x;
        for (int i = 0; i < k; i++)
        {
            int x;
            cin >> x;
            x--;
            a[x] = 0;
        }
        // topological sort
        vector<vector<int>> g(n), rg(n);
        vector<bool> vis(n, 0);
        for (int i = 0; i < n; i++)
        {
            int m;
            cin >> m;
            if (m == 0)
                continue;
            while (m--)
            {
                int x;
                cin >> x;
                x--;
                g[x].push_back(i);
                rg[i].push_back(x);
            }
        }
        stack<int> st;
        function<void(int)> dfs = [&](int u) {
            vis[u] = 1;
            for (int v : g[u])
            {
                if (!vis[v])
                    dfs(v);
            }
            st.push(u);
        };
        for (int i = 0; i < n; i++)
        {
            if (!vis[i])
                dfs(i);
        }
        vector<int> order;
        while (!st.empty())
        {
            order.push_back(st.top());
            st.pop();
        }
        for (int x : order)
        {
            if(!rg[x].empty())
            {
                int s=0;
                for(int y:rg[x])
                {
                    s+=a[y];
                    if(s>a[x])
                        break;
                }
                // cout<<x<<" "<<s<<endl;
                a[x]=min(a[x],s);
            }
        }
        // cout<< order << endl;
        cout << a << endl;
    }
    return 0;
}