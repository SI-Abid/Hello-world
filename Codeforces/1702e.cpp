#include<bits/stdc++.h>
using namespace std;

void dfs(int u, vector<vector<int>> &adj, vector<bool> &vis, int &cnt)
{
    vis[u] = true;
    cnt++;
    for(int v : adj[u])
    {
        if(!vis[v])
            dfs(v, adj, vis, cnt);
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in", "r", stdin);
    #endif
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n;
        cin>>n;
        bool flag=true;
        vector<pair<int,int>> v;
        vector<vector<int>> vv(n+1);
        vector<bool> visited(n+1,false);
        for(int i=0;i<n;i++)
        {
            int x,y;
            cin>>x>>y;
            if(x==y)    
                flag=false;
            v.push_back({x,y});
            vv[x].push_back(y);
            vv[y].push_back(x);
        }
        if(!flag)
        {
            cout<<"NO\n";
            continue;
        }
        sort(v.begin(),v.end());
        int cnt=0;
        for(auto [x,y]:v)
        {
            if(vv[x].size()>2)
            {
                flag=false;
                break;
            }
            if(vv[y].size()>2)
            {
                flag=false;
                break;
            }
            cnt=0;
            if(!visited[x])
            {
                dfs(x,vv,visited,cnt);
            }
            if(cnt&1)
            {
                flag=false;
                break;
            }
            if(!flag)
                break;
        }
        if(flag)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}