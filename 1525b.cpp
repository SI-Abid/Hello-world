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
        vector<int> ar(n);
        for (int i = 0; i < n; i++)
        {
            cin>>ar[i];
        }
        if(is_sorted(all(ar)))
        {
            cout<<0<<endl;
        }
        else if(ar[0]==1 || ar[n-1]==n)
        {
            cout<<1<<endl;
        }
        else if(ar[0]==n && ar[n-1]==1)
        {
            cout<<3<<endl;
        }
        else
        {
            cout<<2<<endl;
        }
        
    }    
    
    return 0;
}
