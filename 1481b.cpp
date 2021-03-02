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
    int n, k, ans;
    cin>>n>>k;
    int h[n];
    for(int i=0; i<n; i++)
    {
        cin>>h[i];
    }
    for(int i=0; i<n-1; i++)
    {
        int x=0, j, c;
        if(h[i]<h[i+1])
        {
            j=i, c=1;
            while(h[i]<h[i+1] && i<n-1)
            {
                x+=(h[i+1]-h[i])*c;
                i++, c++;
            }
            k-=x;
        }
        if(k<=0)
        {
            ans=j-k+1;
        }
        
    }
    if(k>0)
        cout<<"-1\n";
    else
        cout<<ans<<endl;
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
