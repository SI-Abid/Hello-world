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

int main(int argc, char* argv[])
{
    if(argc == 2 or argc == 3) freopen(argv[1], "r", stdin);
    if(argc == 3) freopen(argv[2], "w", stdout);
    ios::sync_with_stdio(false);

    int n,x;
    cin >> n;
    vi a(n), c;
    bool b[1005];
    memset(b, 0, sizeof(b));
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }  
    for (int i = n - 1; i >= 0; i--)
    {
        if(!b[a[i]])
        {
            c.pb(a[i]);
            b[a[i]] = true;
        }
    }

    cout<<c.size()<<endl;
    for(auto i=c.rb;i!=c.re;i++)
        cout << *i << " ";

    cout<<endl;
    return 0;
}
