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

vi divisor(int n)
{
    vi ans;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            ans.pb(i);
            if(i*i!=n)
                ans.pb(n/i);
        }
    }
    return ans;
}

int main(int argc, char* argv[])
{
    if(argc == 2 or argc == 3) freopen(argv[1], "r", stdin);
    if(argc == 3) freopen(argv[2], "w", stdout);
    ios::sync_with_stdio(false);

    int n;
    cin>>n;
    vi a(n);
    int v=0;
    vector<bool> num(1000001,0);
    vi cnt(1000001,0);
    rep(i,0,n)
    {
        cin>>a[i];
        num[a[i]]=1;
    }
    rep(i,0,n)
    {
        for(int j=1;j*j<=a[i];j++)
        {
            if(a[i]%j==0)
            {
                cnt[j]++;
                cnt[a[i]/j]++;
                if(num[j]==0 and cnt[j]>=2)
                    num[j]=1,v++;
                if(num[a[i]/j]==0 and cnt[a[i]/j]>=2)
                    num[j]=1,v++;
            }
        }
    }
    cout<<v<<endl;
    return 0;
}
