#include<bits/stdc++.h>
using namespace std;

vector<int> adj[1005];
bool vis[1005];

void dfs(int u)
{
    vis[u]=true;
    for(int i=0;i<adj[u].size();i++)
    {
        int v=adj[u][i];
        if(!vis[v])
            dfs(v);
    }
}

void clear()
{
    for(int i=0;i<=1000;i++)
    {
        adj[i].clear();
        vis[i]=false;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        clear();
        for(int i=0;i<k;i++)
        {
            int u,v;
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        dfs(0);
        bool flag=false;
        for(int i=1;i<=n;i++)
        {
            if(!vis[i])
            {
                flag=true;
                break;
            }
        }
        if(flag)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }   
    return 0;
}