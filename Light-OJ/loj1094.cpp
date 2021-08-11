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
#define all(x) (x).begin(), (x).end()
#define out cout << setprecision(20)

typedef vector<int> vi;
typedef vector<ll> vll;
typedef set<int> si;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const int MOD = 1e9 + 7;
const int INF = 1e9;

vector<pair<int, int>> edge[30005];

int cnt, leaf;
bool vis[30005];
int save[30005];

void dfs(int u)
{
    vis[u]=true;
    
    for(auto x: edge[u])
    {
        if(!vis[x.F])
        {
            
            save[x.F]=save[u]+x.S;
            if(save[x.F]>cnt)
            {
                leaf=x.F;
                cnt=save[x.F];
            }
            dfs(x.F);
        }
    }
    
}

int solve()
{
    int n;
    cin >> n;
    int m = n - 1;
    for (int i = 0; i < m; i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        edge[u].pb({v,w});
        edge[v].pb({u,w});
    }

    cnt=0;
    dfs(0);

    memset(vis, false, sizeof vis);
    memset(save, 0, sizeof save);
    
    cnt=0;
    dfs(leaf);
    memset(edge, 0, sizeof edge);
    memset(vis, false, sizeof vis);
    memset(save, 0, sizeof save);
    return cnt;
}

int main(int argc, char *argv[])
{
    if (argc == 2 or argc == 3)
        freopen(argv[1], "r", stdin);
    if (argc == 3)
        freopen(argv[2], "w", stdout);
    ios::sync_with_stdio(false);

    int t, it = 1;
    for (cin >> t; t; t--)
    {
        cout << "Case " << it++ << ": " << solve() << endl;
    }

    return 0;
}