#include "bits/stdc++.h"
using namespace std;

typedef long long ll;
typedef unsigned int uint;
typedef vector<string> vs;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define mp 			make_pair
#define pb 			push_back
#define pi 			3.1415926535897932384626433832795
#define mod 		1000000007
#define For(n) 		for(int i=0; i<n; i++)
#define Rev(p)		for(int i=n; i>=0; i--)
#define FOR(p,k)	for(int i=p; i<k; i++)
#define Sort(x)		sort(x.begin(), x.end())
#define Revs(x)		reverse(s.begin(), x.end())
#define mem(a,b)	memset(a, b, sizeof(a))
#define two(i)		((ll)1<<i)

int gcd (int a, int b){return a % b ==0 ? b : gcd(b, a%b);}
int bigmod (int n, int p){ if(p==0) return 1; if(p%2==0){int x=bigmod(n, p/2)%mod;return (x*x)%mod;}else return ((n%mod)*(bigmod(n, p-1)%mod))%mod;}

int main()
{
	string s;
	int k;
	cin>>s>>k;
	int n=s.size();
	if(n%k!=0)
	{
		cout<<"NO"<<endl;
		return 0;
	}
	else
	{
		int len=n/k;
		For(n)
		{
			if(s[i] != s[(i/len) * len + len - 1 - (i % len)])
			{
				cout<<"NO"<<endl;
				return 0;
			}
		}
	}
	cout<<"YES"<<endl;
	return 0;
}
