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
#define rb rbegin()
#define re rend()
#define all(x) (x).begin(),(x).end()
#define out cout<<setprecision(20)

typedef vector<int> vi;
typedef vector<ll> vll;

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
    while(t--)
    {
        int n;
        cin>>n;
        vi v(n);
        for (size_t i = 0; i < n; i++)
        {
            cin>>n;
        }
        vi pre(n),suf(n);
        pre[0]=v[0];
        suf[n-1]=v[n-1];
        int p=0,s=n-1;
        for (size_t i = 1; i < n; i++)
        {
            pre[i]=pre[i-1]*v[i];
            if(pre[i]==0)s=min(s,i);
        }
        for (size_t i = n-2; i>=0; i--)
        {
            suf[i]=s[i+1]*v[i];
            if(suf[i]==0)p=max(p,i);
        }
        if()
        
    }
    
    return 0;
}
