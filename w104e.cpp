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

    auto dup = [](int n) ->string
    {
        string s="";
        while(n--)
            s+="10";
        return s;
    };
    
    int t;
    for(cin>>t;t;t--)
    {
        int n;
        string s, o, p;
        cin>>n>>s;
        // p=dup(n/2);
        // cout<<p<<" ";
        // int a[n];
        // memset(a,0,n);
    
        int cnt1=0;
        // for(int i=0; i<n; i++)
        // {
        //     if(s[i]!=p[i])
        //         a[i]=1;
        // }
        for(int i=0; i<n-1; i++)
        {
            if(s[i]==s[i+1])
                cnt1++;
        }
        // cnt1=ceil(cnt1/2.0);
        cout<<cnt1/2+cnt1%2<<endl;
    }

    return 0;
}
