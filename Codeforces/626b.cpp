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

    int n;
    cin>>n;
    string s;
    cin>>s;
    int r,g,b;
    r=g=b=0;
    for(char c:s)
    {
        if(c=='R') r++;
        else if(c=='G') g++;
        else b++;
    }
    sort(all(s));
    if(r>0 and g>0 and b>0 or ((r>1 and b>1) or (r>1 and g>1) or (b>1 and g>1))) cout<<"BGR"<<endl;
    else if(r>0 and b+g==0) cout<<"R"<<endl;
    else if(g>0 and r+b==0) cout<<"G"<<endl;
    else if(b>0 and r+g==0) cout<<"B"<<endl;
    else if(n==2)
    {
        if(r==0) cout<<"R"<<endl;
        else if(g==0) cout<<"G"<<endl;
        else cout<<"B"<<endl;
    }
    else
    {
        if(b>1 and (g==1 or r==1)) cout<<"GR"<<endl;
        else if(g>1 and (b==1 or r==1)) cout<<"BR"<<endl;
        else if(r>1 and (g==1 or b==1))cout<<"BG"<<endl;
    }
    
    return 0;
}
