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

string dup(string s, int n)
{
    string q="";
    while(n--)
        q+=s;
    return q;
}

int main(int argc, char* argv[])
{
    if(argc == 2 or argc == 3) freopen(argv[1], "r", stdin);
    if(argc == 3) freopen(argv[2], "w", stdout);
    ios::sync_with_stdio(false);
    int t;
    for(cin>>t;t;t--)
    {
        string s,t;
        cin>>s>>t;
        int m,n;
        n=s.size(), m=t.size();

        int g=__gcd(m,n);
        if(dup(s,m/g)==dup(t,n/g))
            cout<<dup(s,m/g)<<endl;

        else 
            cout<<"-1\n";
    }
    return 0;
}
