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
typedef vector<vi> v2i;
typedef vector<ll> vll;
typedef set<int> si;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const int MOD = 1e9 + 7;
const int INF = 1e9;

bool check(v2i a)
{
    return (a[0][0]==a[1][1] or a[0][1]==a[1][0]);
}
bool check2(v2i a)
{
    return (a[0][0]==a[1][1] and a[0][1]==a[1][0]);
}

int main(int argc, char* argv[])
{
    if(argc == 2 or argc == 3) freopen(argv[1], "r", stdin);
    if(argc == 3) freopen(argv[2], "w", stdout);
    ios::sync_with_stdio(false);

    int t;
    // puts("Hello World");
    for(cin>>t;t;t--)
    {
        int n, m;
        cin>>n>>m;
        bool ok;
        vector< vector< vi > >vvv;
        while(n--)
        {
            vector<vi>vv(2);
            for(int i=0; i<2; i++)
            {
                vi v(2);
                for(auto &d:v)
                {
                    cin>>d;
                }
                vv.pb(v);
            }    
            vvv.pb(vv);
        }
        
        if(m==2 and n==1)
            // ok=check2(v[0]);
        if(m&1) ok=false;
        puts(ok?"YES":"NO");
        vvv.clear();
    }
    
    return 0;
}
