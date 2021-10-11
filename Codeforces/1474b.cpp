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

int main(int argc, char* argv[])
{
    if(argc == 2 or argc == 3) freopen(argv[1], "r", stdin);
    if(argc == 3) freopen(argv[2], "w", stdout);
    ios::sync_with_stdio(false);

    vi v;
    for(int i = 2; i <= 100000; i++) {
        bool ok = true;
        for(int j = 2; j * j <= i; j++) {
            if(i % j == 0) {
                ok = false;
                break;
            }
        }
        if(ok)  v.pb(i);
    }
    
    int t;
    for(cin>>t;t;t--)
    {
        ll d;
        cin>>d;
        auto p1 = lower_bound(all(v),d+1)-v.be;
        auto p2 = lower_bound(all(v),v[p1]+d)-v.be;
        cout<<v[p1]*v[p2]<<endl;
        // cout<<*v.be<<endl;
    }
    
    return 0;
}