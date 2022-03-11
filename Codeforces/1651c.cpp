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
    while(t--)
    {
        int n;
        cin>>n;
        vll a(n);
        vll b(n);
        rep(i,0,n) cin>>a[i];
        rep(i,0,n) cin>>b[i];
        ll m1,m2;
        m1=m2=1e18;
        for (size_t i = 0; i < n; i++)
        {
            ll dif=abs(a[i]-b[0])+abs(a[i]-b[n-1]);
            m1=min(m1,dif);
        }
        for (size_t i = 0; i < n; i++)
        {
            ll dif=abs(b[i]-a[0])+abs(b[i]-a[n-1]);
            m2=min(m2,dif);
        }
        // bool flag=false;
        // for (size_t i = 0; i < n-1; i++)
        // {
        //     if(a[i]!=a[i+1] or b[i]!=b[i+1])
        //     {
        //         flag=true;
        //         break;
        //     }
        // }
        // ll mina=*min_element(a.be,a.en);
        // ll minb=*min_element(b.be,b.en);
        // cout<<mina<<" "<<minb<<endl;
        // if(mina==a[0] and mina==a[n-1] and minb==b[0] and minb==b[n-1])
        // {
        //     cout<<abs(a[0]-b[0])+abs(a[n-1]-b[n-1])<<endl;
        // }
        // else
        // {
            cout<<min(min(abs(a[0]-b[n-1])+abs(a[n-1]-b[0]),m1+m2),abs(a[0]-b[0])+abs(a[n-1]-b[n-1]))<<endl;
        // }
    }

    return 0;
}
