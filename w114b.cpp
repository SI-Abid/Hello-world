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

    int n, L, a;
    cin>>n>>L>>a;
    int x[n+1], y[n+1];
    for (int i = 1; i <= n; i++)
    {
        cin>>x[i]>>y[i];
    }
    int cnt=0;
    y[0]=0, x[0]=0;
    for (int i = 1; i <= n; i++)
    {
        int intrvl=x[i]-x[i-1]-y[i-1];
        cnt+=intrvl/a;
    }
    cnt+=(L-x[n]-y[n])/a;
    cout<<cnt<<endl;
    
    return 0;
}
