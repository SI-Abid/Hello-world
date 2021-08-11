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

void solve()
{
    int x, y;
    cin>>x>>y;
    string s;
    cin>>s;
    int l,r,u,d;
    l=r=u=d=0;
    for(auto c:s)
    {
        if(c=='U')
            u++;
        if(c=='D')
            d++;
        if(c=='L')
            l++;
        if(c=='R')
            r++;
    }
    bool xx=false, yy=false;
    if(x>=0 && x<=r)
        xx=true;
    else if(x<0 && abs(x)<=l) 
        xx=true;
    else    xx= false;

    if(y>=0 && y<=u)
        yy=true;
    else if(y<0 && abs(y)<=d)
        yy=true;
    else yy=false;

    (xx && yy) ? cout<<"YES\n" : cout<<"NO\n";

}

int main(int argc, char* argv[])
{
    if(argc == 2 or argc == 3) freopen(argv[1], "r", stdin);
    if(argc == 3) freopen(argv[2], "w", stdout);
    ios::sync_with_stdio(false);

    int t;
    for(cin>>t;t;t--)
        solve();
    
    return 0;
}
