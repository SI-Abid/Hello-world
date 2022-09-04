#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int node, edge;
    cin>>node>>edge;
    vector<vector<pair<int,int>>> adj(node+1);
    vector<vector<pair<int,int>>> rev(node+1);
    for(int i=0; i<edge; i++)
    {
        int u, v, w;
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
        rev[v].push_back({u,w});
    }
    vector<ll> dist(node+1, LLONG_MAX);
    dist[1] = 0;
    priority_queue<pair<ll,int>, vector<pair<ll,int>>, greater<pair<ll,int>>> pq;
    pq.push({0,1});
    while(!pq.empty())
    {
        auto p = pq.top();
        pq.pop();
        int u = p.second;
        ll w = p.first;
        if(w>dist[u])
            continue;
        for(auto x: adj[u])
        {
            int v = x.first;
            ll wt = x.second;
            if(dist[v]>dist[u]+wt)
            {
                dist[v] = dist[u]+wt;
                pq.push({dist[v], v});
            }
        }
    }
    // find node with minimum distance from 1
    int min_node = 2;
    for(int i=1; i<=node; i++)
    {
        if(dist[i]<dist[min_node])
            min_node = i;
    }
    for(int i=2; i<=node; i++)
        if(dist[i]==LLONG_MAX)
            cout<<-1<<' ';
        else
            cout<<dist[i]<<' ';
    cout<<'\n';
    dist.assign(node+1, LLONG_MAX);
    // find node with minimum distance from min_node
    dist[min_node] = 0;
    pq.push({0,min_node});
    while(!pq.empty())
    {
        auto p = pq.top();
        pq.pop();
        int u = p.second;
        ll w = p.first;
        if(w>dist[u])
            continue;
        for(auto x: rev[u])
        {
            int v = x.first;
            ll wt = x.second;
            if(dist[v]>dist[u]+wt)
            {
                dist[v] = dist[u]+wt;
                pq.push({dist[v], v});
            }
        }
    }
    for(int i=1; i<=node; i++)
        if(dist[i]==LLONG_MAX)
            cout<<-1<<' ';
        else
            cout<<dist[i]<<' ';
    return 0;
}