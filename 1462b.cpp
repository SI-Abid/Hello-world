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
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(s.substr(0,4)=="2020" || (s.substr(0,3)=="202" && s[n-1]=='0')|| (s.substr(0,2)=="20" && s.substr(n-2,2)=="20")||(s[0]=='2' && s.substr(n-3,3)=="020")|| s.substr(n-4,4)=="2020")
        cout<<"YES\n";
    else 
        cout<<"NO\n";
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
