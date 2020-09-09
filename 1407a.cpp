#include "bits/stdc++.h"
using namespace std;

typedef long long ll;
typedef unsigned int uint;
typedef vector<string> vs;
typedef vector<int> vi;
typedef set<char> sc;
typedef set<int> si;
typedef pair<int, int> pii;

#define mp 				make_pair
#define pb 				push_back
#define pi 				3.1415926535897932384626433832795
#define MOD 			1000000007
#define For(n) 	    	for(int i=0; i<n; i++)
#define Revl(n) 		for(int i=n; i>=0; i--)
#define FOR(i,p,k)		for(int i=p; i<k; i++)
#define Sort(x)			sort(x.begin(), x.end())
#define Revs(x)			reverse(s.begin(), x.end())
#define mem(a,b)		memset(a, b, sizeof(a))
#define two(i)			((ll)1<<i)

int main()
{
    freopen("in.txt", "r", stdin);
    int t;
    cin>>t;
    while(t--)      //10^3
    {
        int n, sum=0, one=0, zero=0;
        cin>>n;
        int a[n];
        For(n)
        {
            cin>>a[i];
            (i&1)?sum-=a[i]:sum+=a[i];
            (a[i]&1)?one++:zero++;
        }
        if(sum==0)
        {
            cout<<n<<endl;
            For(n)
            {
                cout<<a[i]<<" ";
            }
        }
        else
        {
            cout<<n/2<<endl;
            if(one>zero)
            {
                For(n/2)
                {
                    cout<<"1 ";
                }
            }
            else
            {
                For(n/2)
                {
                    cout<<"0 ";
                }
            }
            
        }
        puts("");
    }
    return 0;
}