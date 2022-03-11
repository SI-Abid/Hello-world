////////////////////////////////////////////////////////////////////////////////////////////
#include <bits/stdc++.h>
using namespace std;

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

int main(int argc, char* argv[])
{
    if(argc == 2 or argc == 3) freopen(argv[1], "r", stdin);
    if(argc == 3) freopen(argv[2], "w", stdout);
    ios::sync_with_stdio(false);

    int t;
    cin>>t;
    vll f(15);
    f[0]=1;
    rep(i,1,15) f[i]=f[i-1]*i;
    for(int i=0;i<41; i++)
    {
        f.pb(1LL<<i);
    }
    f.resize(unique(all(f))-f.be);
    sort(all(f));
    //remove all the duplicates
    // cout<<f.size()<<endl;
    // cout<<f.size()<<endl;

    // for(auto x:f)
    // {
    //     cout<<x<<" ";
    // }
    // cout<<endl;
    while(t--)
    {
        ll n;
        cin>>n;
        int ans=0;
        while(n>0)
        {
            int idx=upper_bound(all(f),n)-f.be;
            // cout<<idx<<endl;
            ans++;
            n-=f[idx-1];
            // cout<<f[idx-1]<<" ";
        }
        // cout<<n<<" ";
        if(n==0) cout<<ans<<endl;
        else cout<<-1<<endl;
    }

    return 0;
}
