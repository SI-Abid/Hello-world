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

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vi v(n+5);
        vi o, e;
        int od=0, ev=0;
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            if(v[i]&1)
            {
                od++;
                o.pb(i+1);
            }
            else
            {
                ev++;
                e.pb(i+1);
            }
        }
        
        if(abs(od-ev)>1)
        {
            cout<<-1<<endl;
        }
        else
        {

            int res=0,pes=0;
            if(o.size())
            {
                int in=1;
                for (int i = 0; i < o.size(); i++)
                {
                    res+=(abs(o[i]-in));
                    in+=2;
                }
            }
            if(e.size())
            {
                int in=1;
                for (int i = 0; i < e.size(); i++)
                {
                    pes+=(abs(e[i]-in));
                    in+=2;
                }
            }

            cout<<min(res,pes)<<endl;
        }

    }    
    
    return 0;
}
