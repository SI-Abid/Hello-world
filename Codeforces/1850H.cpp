#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int _;
    cin>>_;
    for(int tc=1;tc<=_;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n,m;
        cin>>n>>m;
        vector<vector<pair<int,int>>> adj(n+1);
        for(int i=0;i<m;i++)
        {
            int u,v,w;
            cin>>u>>v>>w;
            adj[u].push_back({v,w});
            adj[v].push_back({u,-w});
        }
        vector<int> dist(n+1,0);
        vector<bool> vis(n+1,false);
        bool conflict=false;
        for(int i=1;i<=n;i++)
        {
            if(vis[i])
                continue;
            queue<int> q;
            q.push(i);
            vis[i]=true;
            while(!q.empty())
            {
                int u=q.front();
                q.pop();
                for(auto [v,w]:adj[u])
                {
                    if(!vis[v])
                    {
                        vis[v]=true;
                        dist[v]=dist[u]+w;
                        q.push(v);
                    }
                    else
                    {
                        if(dist[v]!=dist[u]+w)
                        {
                            conflict=true;
                            break;
                        }
                    }
                }
                if(conflict)
                    break;
            }
            if(conflict)
                break;
        }
        cout<<(conflict?"NO":"YES")<<"\n";
    }
    return 0;
}