#include "bits/stdc++.h"
using namespace std;

typedef long long ll;
typedef unsigned int uint;
typedef vector<string> vs;
typedef vector<int> vi;
typedef set<char> sc;
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
	int t;
	cin>>t;
	while(t--)
	{
		int a, b, c;
		cin>>a>>b>>c;
		
		// int l = min(a, min(b, c));
		// int r = max(a, max(b, c));
		// int m = a + b + c - l - r;
		
		// if(l!=m) l++;
		// if(r!=m) r--;
		int dist = abs(a-b) + abs(b-c) + abs(a-c);
		
		cout<<max(dist-4, 0)<<endl;
	}
	return 0;
}
