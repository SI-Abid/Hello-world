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
#define rb rbegin()
#define re rend()
#define all(x) (x).begin(),(x).end()
#define out cout<<setprecision(20)

typedef vector<int> vi;
typedef vector<ll> vll;
typedef set<int> si;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const int MOD = 1e9 + 7;
const int INF = 1e9;

class str: public string
{
    public:
    void replace(char x, char y){ for (char &c:*this)if(c==x)c=y; }
};

int main(int argc, char* argv[])
{
    if(argc == 2 or argc == 3) freopen(argv[1], "r", stdin);
    if(argc == 3) freopen(argv[2], "w", stdout);
    ios::sync_with_stdio(false);

    int t;cin>>t;
    while(t--)
    {
        ll n, h;
        cin>>n>>h;
        vi a(n);
        for(ll i=0; i<n; i++) cin>>a[i];

        sort(a.rb, a.re);
        ll ans=0, p,q;

        p=a[0];
        q=a[1];

        if(h<=p)
        {
            cout<<"1\n";
            continue;
        }

        ans=h/(p+q);
        h%=(p+q);
        
        ans*=2;

        if(h>0)
        {
            if(h<=p)
                ans++;

            else
                ans+=2;
        }
        
        cout<<ans<<endl;
    }

    return 0;
}
