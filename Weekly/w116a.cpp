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

    int n;
    cin>>n;
    vector<int> v(n);
    // vector<pair<int,int>> vp(n);
    for (int  i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    cout<<v[1]-v[0]<<" "<<v[n-1]-v[0]<<endl;
    for (int i = 1; i < n-1; i++)
    {
        cout<<min(v[i]-v[i-1], v[i+1]-v[i]);
        cout<<" ";
        cout<<max(v[i]-v[0], v[n-1]-v[i]);
        cout<<endl;
    }
    cout<<v[n-1]-v[n-2]<<" "<<v[n-1]-v[0]<<endl;
    
    return 0;
}
