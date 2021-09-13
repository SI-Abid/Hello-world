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

void solve()
{
    int n; cin>>n;
    string s; cin>>s;
    for (int i = 0; i < n-1; i++)
    {
        if(s[i]!=s[i+1])
        {
            cout<<i+1<<" "<<i+2<<endl;
            return;
        }
    }
    cout<<"-1 -1\n";
}

int main(int argc, char* argv[])
{
    if(argc == 2 or argc == 3) freopen(argv[1], "r", stdin);
    if(argc == 3) freopen(argv[2], "w", stdout);
    ios::sync_with_stdio(false);

    int t; cin>>t;
    while (t--)
    {
        solve();
    }
        
    
    return 0;
}
