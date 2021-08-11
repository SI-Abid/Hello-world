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

typedef vector<int> vi;
typedef vector<ll> vll;
typedef set<int> si;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const int MOD = 1e9 + 7;
const int INF = 1e9;

double x;

int op_div(int i)
{
    return ceil(i/x);
}

void solve()
{
    ll n;
    cin>>n>>x;
    vi a(n);
    for(auto &x:a)
    {
        cin>>x;
    }
    ll mnsum=accumulate(all(a), 0ll);
    transform(a.be, a.en, a.be, op_div);
    ll mxsum=accumulate(all(a), 0LL);
    cout<<setprecision(20)<<ceil(mnsum/x)<<" "<<mxsum<<endl;

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
