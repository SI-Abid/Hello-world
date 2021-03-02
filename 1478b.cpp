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

bool check(int n, int k)
{
    while(n)
    {
        if(n%10==k)
            return true;
        n-=k;
    }
    return false;
}

int main(int argc, char* argv[])
{
    if(argc == 2 or argc == 3) freopen(argv[1], "r", stdin);
    if(argc == 3) freopen(argv[2], "w", stdout);
    ios::sync_with_stdio(false);

    int t;
    for(cin>>t;t;t--)
    {
        int n, k, a;
        cin>>n>>k;
        while(n--)
        {
            bool ok=false;
            cin>>a;
            if(a>10*k || a%k==0)
            {
                cout<<"Yes\n";
                continue;
            }
            while(a>0)
            {
                if(a%10==k)
                {
                    ok=true;
                    cout<<"Yes\n";
                    break;
                }
                a-=k;
            }
            if(!ok) cout<<"No\n";
        }
    }
    
    return 0;
}
