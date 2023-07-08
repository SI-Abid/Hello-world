#include<bits/stdc++.h>
using namespace std;

void dfs_find_leaf(int node, vector<vector<int>> &adj, vector<bool> &vis, int &leaf)
{
    vis[node]=true;
    if(adj[node].size()==1)
    {
        leaf=node;
        return;
    }
    for(auto child:adj[node])
    {
        if(!vis[child])
        {
            dfs_find_leaf(child,adj,vis,leaf);
        }
    }
}

signed main()
{
    int _;
    cin>>_;
    for(int tc=1;tc<=_;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n,m;
        cin>>n>>m;
        vector<vector<int>> adj(n+1);
        for(int i=0;i<m;i++)
        {
            int u,v;
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<bool> vis(n+1);
        int leaf=0;
        dfs_find_leaf(1,adj,vis,leaf);
        int leaf_par = adj[leaf][0];
        int y = adj[leaf_par].size();
        int x;
        for(auto xx:adj[leaf_par])
        {
            if(adj[xx].size()>1)
            {
                x=adj[xx].size();
                break;
            }
        }
        cout<<x<<" "<<y-1<<endl;
    }
    return 0;
}