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
    ll n;
    cin>>n;
    if(n==1)
    {
        cout<<"NO"<<endl;
        return;
    }
    
    for(ll i=1; i*i*i<=n; i++)
    {
        ll ca=i*i*i;
        ll cb=n-ca;
        if(cb==0)
            continue;
        cb=cbrt(cb);
        if(cb*cb*cb==n-ca)
        {
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO"<<endl;
}

int main(int argc, char const *argv[])
{
    if(argc == 2 or argc == 3) freopen(argv[1], "r", stdin);
    if(argc == 3) freopen(argv[2], "w", stdout);
    ios::sync_with_stdio(false);

    int t;
    for(cin>>t;t;t--)
        solve();
    
    return 0;
}
