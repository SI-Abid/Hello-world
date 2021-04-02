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
    ll n, c;
    cin>>n>>c;
    int v;
    int ar[32];
    for (ll i = 0; i < n; i++)
    {
        cin v;
        ar[(int)log2(v)]++;
    }
    int cnt=0, used=0;
    while(true)
    {
        int cont=c;
        for (int i = 32 - 1; i >= 0; i--)
        {
            while(ar[i]>0 && (1<<i)<=cont)
            {
                cont-=ar[i];
                ar[i]--;
                used++;
                if(used==n)
                {
                    cout<<cnt<<endl;
                    return;
                }
            }
            if(cont==0)
                break;
        }
        cnt++;
    }
    
    
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
