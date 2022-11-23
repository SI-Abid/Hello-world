#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int n,a,b;
    cin>>n>>a>>b;
    vector<vector<int>> adj(n+1);
    for(int i=0;i<n-1;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<bool> vis(n+1,0);
    vector<int> dista(n+1,0);
    vector<int> distb(n+1,0);
    int timer=1;
    queue<int> q;
    q.push(a);
    vis[a]=1;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(auto v:adj[u])
        {
            if(!vis[v])
            {
                vis[v]=1;
                dista[v]=timer++;
                q.push(v);
            }
        }
    }
    vis.assign(n+1,0);
    q.push(b);
    vis[b]=1;
    timer=1;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(auto v:adj[u])
        {
            if(!vis[v])
            {
                vis[v]=1;
                distb[v]=timer++;
                q.push(v);
            }
        }
    }
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        if(i==a or i==b)
        {
            continue;
        }
        ans=max(ans,min(dista[i],distb[i]));
    }
    cout<<ans<<endl;
    return 0;
}