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

int digitsum(ll n)
{
    int sum=0;
    while(n)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}

int main(int argc, char* argv[])
{
    if(argc == 2 or argc == 3) freopen(argv[1], "r", stdin);
    if(argc == 3) freopen(argv[2], "w", stdout);
    ios::sync_with_stdio(false);


    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        ll x, y, k;
        cin>>x>>y>>k;
        cout<<"Case "<<i<<": ";
        vector<pair<int, int>> ar;
        vi fin;
        for(int d=x; d<=y; d++)
        {
            ar.pb( mp(digitsum(d), d) );
        }
        sort(all(ar));
        int in=0;
        fin.pb(ar[0].second);
        for(auto x:ar)
        {
            int z = x.S;
            if(z>fin[in])
            {
                fin.pb(z);
                in++;
            }
        }
        
        if(k>fin.size())
        {
            cout<<"-1\n";
        }
        else
        {
            cout<<fin[k-1]<<endl;
        }
    }
    
    return 0;
}
