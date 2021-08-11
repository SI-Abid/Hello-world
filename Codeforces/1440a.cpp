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
    int n, c0, c1, h, cnt=0;
    cin>>n>>c0>>c1>>h;
    string s;
    cin>>s;
    for(auto c:s)
        if(c=='1')
            cnt++;

    int sum;
    if(c0-c1>h)
        sum=h*(n-cnt)+(n*min(c0,c1));
    else if(c1-c0>h)
        sum=h*cnt+(n*min(c0,c1));
    else
    {
        sum=cnt*c1+(n-cnt)*c0;
    }
    
    cout<<sum<<endl;
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
