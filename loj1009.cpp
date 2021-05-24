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
#define all(x) (x).begin(),(x).end()
#define out cout<<setprecision(20)

typedef vector<int> vi;
typedef vector<ll> vll;
typedef set<int> si;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const int MOD = 1e9 + 7;
const int INF = 1e9;

vector<int> adj[100005];
bool vis[100005];


void bfs(int r)
{
    
}

int main(int argc, char* argv[])
{
    if(argc == 2 or argc == 3) freopen(argv[1], "r", stdin);
    if(argc == 3) freopen(argv[2], "w", stdout);
    ios::sync_with_stdio(false);

    int t, it=1;
    for(cin>>t;t;t--)
    {
        cout<<"Case "<<it++<<": ";
        int n;
        cin>>n;
        vector<int> edge(n+1);
        for (int i = 0; i < n; i++)
        {
            int u, v;
            cin>>u>>v;
            adj[u].pb(v);
            adj[v].pb(u);
        }
        
        bfs(0);
    }
    return 0;
}