#include<bits/stdc++.h>
using namespace std;

void dfs(int u, vector<vector<int>>& adj, vector<bool>&vis, int dis, int &ans)
{
    vis[u]=true;
    ans=max(ans,dis);
    for(int v:adj[u])
    {
        if(!vis[v])
        {
            dfs(v,adj,vis,dis+1,ans);
        }
    }
}
int main()
{
    int n;
    cin>>n;
    vector<vector<int>> adj(n+1);
    for(int i=1;i<=n;i++)
    {
        int m;
        cin>>m;
        if(m==-1)
        {
            adj[0].push_back(i);
            adj[i].push_back(0);
        }
        else
        {
            adj[m].push_back(i);
            adj[i].push_back(m);
        }
    }
    vector<bool> visited(n+1,false);
    int lvl=0,ans=0;
    dfs(0,adj,visited,lvl,ans);
    cout<<ans<<'\n';
    return 0;
}