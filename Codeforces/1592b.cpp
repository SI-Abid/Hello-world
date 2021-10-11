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
        int n, x;
        cin>>n>>x;
        vi a(n);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        if(n>=2*x)
        {
            puts("YES");
            continue;
        }
        vi b = a;
        sort(all(a));
        
        // for(int t:a)    cout<<t<<endl;
        // for(int t:b)    cout<<t<<endl;

        bool ok=true;
        for (int i = n-x; i < x; i++)
        {
            if(a[i]!=b[i])
            {
                ok=false;
                break;
            }
        }
        puts(ok?"YES":"NO");
    }    
    
    return 0;
}
