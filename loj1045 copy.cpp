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

int main(int argc, char* argv[])
{
    if(argc == 2 or argc == 3) freopen(argv[1], "r", stdin);
    if(argc == 3) freopen(argv[2], "w", stdout);
    ios::sync_with_stdio(false);
    
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        ll ans;
        int a,b,c;
        cin>>a>>b>>c;
        int x,y,z;
        x=min(a,min(b,c));
        z=max(a,max(b,c));
        y=a+b+c-x-z;
        ans=x*x+y*y;     
        cout<<"Case "<<i<<": ";
        if(ans==z*z)
            cout<<"yes";
        else 
            cout<<"no";
        cout<<endl;
    }
    return 0;
}