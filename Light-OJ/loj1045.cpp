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
double lg[1000002];

void getlogsum();

int main(int argc, char* argv[])
{
    if(argc == 2 or argc == 3) freopen(argv[1], "r", stdin);
    if(argc == 3) freopen(argv[2], "w", stdout);
    ios::sync_with_stdio(false);

    getlogsum();
    
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        int n, b;
        cin>>n>>b;
        ll ans=(lg[n]/log(b))+1;
        cout<<"Case "<<i<<": "<<ans<<endl;
    }
    return 0;
}

void getlogsum()
{
    for(int i=1; i<=1000000; i++)
    {
        lg[i]=lg[i-1]+log(i);
    }
}