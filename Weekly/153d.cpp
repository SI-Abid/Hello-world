#include<bits/stdc++.h>
using namespace std;

#define ll long long
vector<int> adj[100001];
bool vis[100001];
int par[100001];
int dist[100001];
double prob[100001];
vector<int>leaf;
// double total;

void dfs(int u, int p)
{
    vis[u] = true;
    par[u] = p;
    dist[u] = dist[p] + 1;
    if(u!=1)
    {
        int size = adj[p].size();
        if(p!=1)    size--;
        prob[u] = prob[p]/size;
    }
    for(int v : adj[u])
    {
        if(!vis[v])
            dfs(v, u);
    }
    if(adj[u].size() == 1 and u!=1)
    {
        leaf.push_back(u);
        // total+=dist[u];
    }
}

void clear()
{
    for(int i = 1; i <= 100000; i++)
    {
        adj[i].clear();
        vis[i] = false;
        par[i] = 0;
        dist[i] = 0;
    }
}

int main()
{
    int n;
    // cin>>n;
    scanf("%d", &n);
    for(int i = 0; i < n-1; i++)
    {
        int u, v;
        // cin>>u>>v;
        scanf("%d %d", &u, &v);
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dist[0] = -1;
    prob[1] = 1;
    double total=0;
    dfs(1, 0);
    for(auto i : leaf)
    {
        total+=dist[i]*prob[i];
    }
    // cout<<setprecision(20)<< total/leaf.size()<<endl;
    printf("%.10f\n", total);
    return 0;
}