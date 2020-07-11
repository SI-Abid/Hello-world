#include"bits/stdc++.h"
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
#define FOR(i,p,k)	for(int i=p; i<k; i++)
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
        int n;
        cin>>n;
        vi v;
        bool ok=false, nok=false;
        int cnt=0;
        int d=n;
        while(d--)
        {
            int c;
            cin>>c;
            v.pb(c);
        }
        for(int i=0;i<n;i++)
        {
            if(v[i]==i+1)
                ok=true;
            else
            {
                nok=true;
            }
        }
        if(ok && !nok)
        {
            cout<<"0\n";
        }
        else if(!ok && nok)
        {
            cout<<"1\n";
        }
        else
        {
            cout<<"2\n";
        }
    }
    return 0;
}