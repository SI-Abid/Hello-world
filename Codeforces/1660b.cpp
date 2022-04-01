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

typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const int MOD = 1e9 + 7;
const int INF = 1e9;

int main(int argc, char* argv[])
{
    if(argc == 2 or argc == 3) freopen(argv[1], "r", stdin);
    if(argc == 3) freopen(argv[2], "w", stdout);
    ios::sync_with_stdio(false);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vi v(n);
        bool ok=true;
        for (size_t i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        if(n==1)
        {
            cout<<(v[0]==1?"YES":"NO")<<endl;
            continue;
        }
        sort(all(v));
        if(v[n-1]-v[n-2]>1)
            ok=false;
            
        cout<<(ok?"YES":"NO")<<endl;
        
    }
    
    return 0;
}
