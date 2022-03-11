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
        vi a(n);
        rep(i,0,n) cin>>a[i];
        sort(all(a));
        vll pre(n,0);
        vll suf(n,0);
        
        pre[0]=a[0];
        rep(i,1,n) pre[i]=pre[i-1]+a[i];
        suf[n-1]=a[n-1];
        for(int i=n-2;i>=0;i--) suf[i]=suf[i+1]+a[i];

        /*
        1  2  3  4  5 -- main array
        1  3  6 10 15 -- prefix sum array

        */

        bool flag = false;
        for(int i=1,j=n-1; i<j; i++,j--)
        {
            if(pre[i]<suf[j])
            {
                flag = true;
                break;
            }
        }
        if(flag) cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}
