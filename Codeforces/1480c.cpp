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

int n;
int a[100010];

void query(int x)
{
    if(1<=x && x<=n)
    {
        cout<<"? "<<x<<endl;
        fflush(stdout);
        cin>>a[x];
    }
}

int main(int argc, char* argv[])
{
    if(argc == 2 or argc == 3) freopen(argv[1], "r", stdin);
    if(argc == 3) freopen(argv[2], "w", stdout);
    ios::sync_with_stdio(false);

    cin>>n;
    a[0]=a[n+1]=n+1;

    int l=1, r=n;
    while(l<r)
    {
        int m= (l+r)/2;
        query(m);
        query(m+1);
        if(a[m]<a[m+1])
        {
            r=m;
        }
        else
        {
            l=m+1;
        }
    }
    cout<<"! "<<l<<endl;
    fflush(stdout);
    return 0;
}
