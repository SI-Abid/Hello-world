#include<bits/stdc++.h>
using namespace std;

struct node
{
    int u,w,par;
    node(int a,int b,int c)
    {
        u=a;
        w=b;
        par=c;
    }
    bool operator<(const node &p)const
    {
        return w>p.w;
    }
};

struct trip{
    int u,v,w;
    trip(int a,int b,int c)
    {
        u=a;
        v=b;
        w=c;
    }
    bool operator<(const trip &p)const
    {
        if(u!=p.u) return u>p.u;
        if(v!=p.v) return v>p.v;
        return w>p.w;
    }
};

map<trip,int>mp;
vector<vector<node>>g;
vector<vector<int>>dist;
vector<int>par;

signed main()
{
    int n,m,k;
    cin>>n>>m>>k;
    g.resize(n+1);
    dist.resize(n+1,vector<int>(n+1,INT_MAX));
    par.resize(n+1,0);
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        g[u].push_back(node(v,1,0));
        g[v].push_back(node(u,1,0));
    }
    for (int i = 0; i < k; i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        mp[trip(a,b,c)]=1;
    }
    int path_len=INT_MAX;
    priority_queue<node>pq;
    pq.push(node(1,0,0));
    dist[1][0]=0;
    while(!pq.empty())
    {
        node top=pq.top();
        pq.pop();
        int u=top.u;
        int w=top.w;
        int p=top.par;
        if(w>dist[u][p]) continue;
        for(auto v:g[u])
        {
            auto new_trip=trip(v.u,u,p);
            if(mp.count(new_trip)>0)    continue;
            if(dist[v.u][u]>w+v.w)
            {
                dist[v.u][u]=w+v.w;
                par[v.u]=u;
                pq.push(node(v.u,dist[v.u][u],u));
            }
        }
    }
    int prevs=-1;
    for(int i=1;i<=n;i++)
    {
        if(dist[n][i]<path_len)
        {
            path_len=dist[n][i];
            prevs=i;
        }
    }
    if(path_len==INT_MAX)
    {
        cout<<-1<<endl;
        return 0;
    }
    vector<int>ans;
    while(prevs!=0)
    {
        ans.push_back(prevs);
        prevs=par[prevs];
    }
    cout<<"Distance: ";
    for(int i=1;i<=n;i++)
        cout<<dist[n][i]<<" ";
    cout<<endl;
    cout<<ans.size()<<endl;
    for(auto x:ans)
        cout<<x<<" ";
    cout<<endl;
    return 0;
}