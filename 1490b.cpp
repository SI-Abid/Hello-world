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
    vector<int> c(3, 0);
    cin>>n;
    int a[n];
    for(auto x:a)
    {
        cin>>x;
        c[x%3]++;
    }
    
    int cnt=0;
    n/=3;

    for(int i=0; i<3; i++)
    {

        if(c[i]==*max_element(all(c)))
        {
 
            cnt=(c[i]+1)/2-c[(i+1)%3];
            cnt+=2*(((c[i]+1)/2)-c[(i+2)%3]);
            break;
        }
    }
    if(cnt>0)   cout<<cnt<<endl;
    else cout<<"0\n";
}

int main(int argc, char* argv[])
{
    if(argc == 2 or argc == 3) freopen(argv[1], "r", stdin);
    if(argc == 3) freopen(argv[2], "w", stdout);
    ios::sync_with_stdio(false);

    int t;
    for(cin>>t;t;t--)
    {
        solve();
    }
    
    return 0;
}
