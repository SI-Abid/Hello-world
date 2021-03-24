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
    string s;
    cin>>s;
    int j=-1, k=-1;
    for(int i=0; i<s.size()-1; i++)
    {
        if(s[i]=='0' && s[i+1]=='0')
            j=i;
        if(s[i]=='1' && s[i+1]=='1' && k==-1)
            k=i;
    }
    if(j!=-1 && k!=-1 && j>k)
    {
        cout<<"NO\n";
    }
    else
    {
        cout<<"YES\n";
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
