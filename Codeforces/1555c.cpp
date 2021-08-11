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

    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        vll a(n+5);
        vll b(n+5);
        ll suma[n+5]={0}, sumb[n+5]={0};
        for(ll i = 1; i <= n; i++)  
        {
            cin >> a[i];
            suma[i] = suma[i-1] + a[i];
        }
        for(ll i = 1; i <= n; i++)
        {
            cin >> b[i];
            sumb[i] = sumb[i-1] + b[i];
        }
        ll mx = 0, mn = INF;
        for(ll i = 1; i <= n; i++)
        {
            ll x = suma[i] + sumb[n] - sumb[i-1];
            // mx = max(mx, x);
            ll lefta = suma[n]- suma[i];
            ll leftb = sumb[i-1];
            mn = min(mn, max(lefta, leftb));
        }
        cout << mn << endl;
    }    
    
    return 0;
}
