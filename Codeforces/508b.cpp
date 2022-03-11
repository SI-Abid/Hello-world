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

    string s;
    cin>>s;
    int n=s.size();
    bool flag=false;
    vector<pair<int,int>> v;
    for(int i=0; i<n; i++)
    {
        if(s[i]%2==0)
        {
            v.pb({s[i],i});
            flag=true;
        }
    }
    if(!flag)
    {
        puts("-1");
        return 0;
    }
    // for(auto x:v)
    // {
    //     cout<<x.F<<" "<<x.S<<endl;
    // }
    for(int i=0;i<v.size();i++)
    {
        if(s[n-1]>v[i].F)
        {
            swap(s[n-1],s[v[i].S]);
            break;
        }
    }
    if(s[n-1]%2==1)
        for(int i=n-2;i>=0;i--)
        {
            if(s[i]%2==0)
            {
                swap(s[i],s[n-1]);
                break;
            }
        }
    cout<<s<<endl;
    
    return 0;
}
