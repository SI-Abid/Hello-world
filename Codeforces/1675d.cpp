////////////////////////////////////////////////////////////////////////////////////////////
#include <bits/stdc++.h>
using namespace std;

#define cls system("clear");
#define ll long long
#define ull unsigned long long
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define F first
#define S second
#define be begin()
#define en end()
#define rb rbegin()
#define re rend()
#define all(x) (x).begin(),(x).end()
#define out cout<<setprecision(20)
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define what_is(x) cout << #x << " is " << x << endl;
#define error(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }
#define pcase(x) cout << "Case " << x << ": ";
void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) { cerr << *it << " = " << a << endl; err(++it, args...); }

typedef vector<int> vi;
typedef vector<ll> vll;
typedef set<int> si;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const int MOD = 1e9 + 7;
const int INF = 1e9;
const int dx[]={0,0,1,-1};
const int dy[]={1,-1,0,0};
const int fx[]={0,1,1,1,0,-1,-1,-1};
const int fy[]={1,1,0,-1,-1,-1,0,1};

vector<int> adj[100005];
bool vis[100005];
vector<vector<int>> path;

void dfs(int u)
{
    vis[u]=true;
    for (auto v: adj[u])
    {
        if(!vis[v])
        {
            path.back().pb(v);
            dfs(v);
        }
        else if(vis[v] and path.back().size()!=0)
        {
            path.emplace_back();
        }
    }
}

void clear()
{
    for (int i = 0; i < 100005; i++)
    {
        adj[i].clear();
    }
    path.clear();
    memset(vis, 0, sizeof vis);
}

int main(int argc, char* argv[])
{
    if(argc == 2 or argc == 3) freopen(argv[1], "r", stdin);
    if(argc == 3) freopen(argv[2], "w", stdout);
    ios::sync_with_stdio(false);

    int t;
    cin>>t;
    while(t--)
    {
        clear();
        int n;cin>>n;
        int root,x;
        for (int i = 1; i <= n; i++)
        {
            cin>>x;
            adj[x].pb(i);
            adj[i].pb(x);
            if(x==i) 
                root=x;
        }
        path.eb(vector<int>());
        path.back().pb(root);
        dfs(root);
        if(path.back().size()==0)
        {
            path.pop_back();
        }
        cout<<path.size()<<"\n";
        for(auto v: path)
        {
            // if(v.size()==0) continue;
            cout<<v.size()<<"\n";
            for(auto u: v)
            {
                cout<<u<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
