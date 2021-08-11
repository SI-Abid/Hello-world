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
#define Revl(n) 	for(int i=n; i>=0; i--)
#define FOR(i,p,k)	for(int i=p; i<k; i++)
#define Sort(x)		sort(x.begin(), x.end())
#define Revs(x)		reverse(s.begin(), x.end())
#define mem(a,b)	memset(a, b, sizeof(a))
#define two(i)		((ll)1<<i)

int spd(int n)
{
	int res;
	for(int i=2; i<=n; i++)
	{
		if(n%i==0)
		{
			res=i;
			break;
		}
	}
	return res;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, k;
		cin>>n>>k;
		while(k--)	
		{
			int div = spd(n);
			n+=div;
			if(n%2==0)
				break;
		}
		if(k!=0)	//all even number has the smallest positive divisor 2
			n=n+(2*k);
			
		cout<<n<<endl;
	}
	return 0;
}
