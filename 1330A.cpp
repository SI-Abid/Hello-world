#include "bits/stdc++.h"
using namespace std;

typedef long long ll;
typedef unsigned int uint;
typedef vector<string> vs;
typedef vector<int> vi;
typedef set<char> sc;
typedef pair<int, int> pii;

#define mp 			make_pair
#define pb 			push_back
#define pi 			3.1415926535897932384626433832795
#define MOD 		1000000007
#define For(n) 	    for(int i=0; i<n; i++)
#define Revl(n) 	for(int i=n-1; i>=0; i--)
#define FOR(p,k)	for(int i=p; i<=k; i++)
#define Sort(x)		sort(x.begin(), x.end())
#define Revs(x)		reverse(s.begin(), x.end())
#define mem(a,b)	memset(a, b, sizeof(a))
#define two(i)		((ll)1<<i)

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, x;
        cin>>n>>x;
        int v[201];
        FOR(1,n+x)
        {
            v[i]=0;
        }
        FOR(1,n)
        {
            int kk;
            cin>>kk;
            v[kk]=1;
        }
        for(int d=n+x; d>=1; d--)
        {
            int a=0;
            for(int i=1;i<=d;i++)
            {
                if(v[i]==0)
                    a++;
            }
            if(a<=x)
            {
                cout<<d<<endl;
                break;
            }
        }
    }
    return 0;
}