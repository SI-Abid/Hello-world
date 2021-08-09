#include "bits/stdc++.h"
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define be begin()
#define en end()
#define rb rbegin()
#define re rend()
#define all(x) (x).begin(),(x).end()
#define out cout<<setprecision(20)

typedef vector<int> vi;
typedef vector<ll> vll;
typedef set<int> si;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const int MOD = 1e9 + 7;
const int INF = 1e9;

vi graph[100010], cost[100010];

struct node
{
    int u, w;
    node(int u, int w):u(u), w(w){}
    bool operator<(const node& rhs) const
    {
        return w < rhs.w;
    }
};

void add_edge(int u, int v, int w)
{
    graph[u].push_back(v);
    graph[v].push_back(u);
    cost[u].push_back(w);
    cost[v].push_back(w);
}

void dijkstra(int n, vi g[], vi cost[], int s)
{
    vi dist(n+5, INF);

    priority_queue<node> q;
    dist[s] = 0;
    q.push(node(s, 0));

    while(!q.empty())
    {
        node t = q.top();
        q.pop();
        int u = t.u;

        for(int i = 0; i < graph[u].size(); i++)
        {
            int v = graph[u][i];

            if(dist[v] > dist[u] + cost[u][i])
            {
                dist[v] = dist[u] + cost[u][i];
                q.push(node(v, dist[v]));
            }
        }
    }
    for(int i = 1; i <= n; i++)
    {
        cout<<s<<"-->"<<i<<" = "<<dist[i]<<endl;
    }
}

int main(int argc, char* argv[])
{
    if(argc == 2 or argc == 3) freopen(argv[1], "r", stdin);
    if(argc == 3) freopen(argv[2], "w", stdout);
    ios::sync_with_stdio(false);

    int node, edge;
    cin>>node>>edge;
    for(int i = 0; i < edge; i++)
    {
        int u, v, w;
        cin>>u>>v>>w;
        add_edge(u, v, w);
    }
    int s=1;
    dijkstra(node, graph, cost, s);
    
    return 0;
}
