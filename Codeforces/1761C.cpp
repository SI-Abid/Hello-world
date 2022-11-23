#include<bits/stdc++.h>
using namespace std;

// topology sort
void dfs(int u, vector<vector<int>> &adj, vector<bool> &vis, vector<int> &ans)
{
    vis[u] = true;
    for (int v : adj[u])
    {
        if (!vis[v])
        {
            dfs(v, adj, vis, ans);
        }
    }
    ans.push_back(u);
}

signed main()
{
    int _;
    cin>>_;
    for(int tc=1;tc<=_;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n;
        cin>>n;
        vector<vector<int>> adj(n+1);
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                char c;
                cin>>c;
                if(c=='1')
                {
                    adj[i].push_back(j);
                }
            }
        }
        vector<bool> vis(n+1, false);
        vector<int> ans;
        for (int i = 1; i <= n; i++)
        {
            if (!vis[i])
            {
                dfs(i, adj, vis, ans);
            }
        }
        reverse(ans.begin(), ans.end());
        // for (int i = 0; i < n; i++)
        // {
        //     cout<<ans[i]<<" ";
        // }
        // cout<<'\n';
        vector<vector<int>> ans2(n+1);
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j <= i+1; j++)
            {
                ans2[ans[i]].push_back(j);
            }
        }
        for (size_t i = 1; i <= n; i++)
        {
            cout<<ans2[i].size()<<" ";
            for(int x:ans2[i])
            {
                cout<<x<<" ";
            }
            cout<<"\n";
        }
        
    }
    return 0;
}