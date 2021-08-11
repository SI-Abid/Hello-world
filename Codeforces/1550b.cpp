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
#define all(x) (x).begin(), (x).end()
#define out cout << setprecision(20)

typedef vector<int> vi;
typedef vector<ll> vll;
typedef set<int> si;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const int MOD = 1e9 + 7;
const int INF = 1e9;

int main(int argc, char *argv[])
{
    if (argc == 2 or argc == 3)
        freopen(argv[1], "r", stdin);
    if (argc == 3)
        freopen(argv[2], "w", stdout);
    ios::sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, a, b;
        cin >> n >> a >> b;
        string s;
        cin>>s;
        if(b>=0)
        {
            cout << (a+b)*n << endl;
        }
        else 
        {
            vll v, w;
            ll ones=0, zeros=0;
            for(ll i=0;i<n-1;i++)
            {
                ll cnt=0;
                if(s[i]=='1')
                {
                    while(s[i]==s[i+1] && i<n-1)
                        cnt++, i++;
                    ones+=cnt+1;
                    v.pb(cnt+1);
                }
            }
            for(ll i=0;i<n-1;i++)
            {
                ll cnt=0;
                if(s[i]=='0')
                {
                    while(s[i]==s[i+1] && i<n-1)
                        cnt++, i++;
                    zeros+=cnt+1;
                    w.pb(cnt+1);
                }
            }
            ll ans=0;
            if(v.size()>w.size()) // zeros is less
            {
                for(auto x:w)
                {
                    ans+=(a*x+b);
                }
                ans+=(a*ones+b);
            }
            else
            {
                for(auto x:v)
                {
                    ans+=(a*x+b);
                }
                ans+=(a*zeros+b);
            }
            cout << ans << endl;
        }
    }

    return 0;
}
