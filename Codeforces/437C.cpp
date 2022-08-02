#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    priority_queue<pair<int,int>> pq;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        pq.push({v[i],i+1});
    }
    vector<set<int>> adj(n+1);
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        adj[x].insert(y);
        adj[y].insert(x);
    }
    int ans=0;
    while(!pq.empty())
    {
        int u=pq.top().second;
        pq.pop();
        for(auto x:adj[u])
        {
            ans+=v[x-1];
            adj[x].erase(u);
        }
    }
    cout<<ans;
    return 0;
}