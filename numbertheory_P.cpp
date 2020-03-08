#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll mod = 1000000007, x, y, d;
map<ll, ll>prime;
map<ll, ll>::iterator it;
void extendedEuclid(int A, int B) {
    if(B == 0) {
        d = A;
        x = 1;
        y = 0;
    }
    else {
        extendedEuclid(B, A%B);
        int temp = x;
        x = y;
        y = temp - (A/B)*y;
    }
}
void primeFactor(ll n, ll m)
{
	ll counter=0;
	
	for(int i=2; i*i<=n; i++) 
	{
		while(n%i==0)
		{
			counter++;
			n/=i;
		}
		prime.insert({i, counter*m});
	}
	if(n>2)
	{
		prime.insert({n, m});
	}
}

ll bigmod(ll n, ll p)
{
	if(p==0)
		return 1;
	if(p%2==0) {
		ll z=bigmod(n, p/2)%mod;
		return (z*z)%mod;
	}
	else
		return ((n%mod)*(bigmod(n, p-1)%mod))%mod;
}
ll mmi(ll n)
{
	extendedEuclid(n, mod);
	return (x%mod+mod)%mod;
}
ll sum()
{
	ll res=1, numerator=0, denominator=0;
	for(it=prime.begin(); it!=prime.end(); it++)
	{
		numerator = bigmod(it->first, it->second+1)-1;
		denominator = mmi(it->first-1);
		res=(res*numerator*denominator)%mod;
	}
	return res;
}
int main()
{
	int t;
	cin>>t;
	for(int i=1; i<=t; i++)
	{
		int n, m;
		cin>>n>>m;
		prime.clear();
		primeFactor(n, m);
		if(n==mod)
			printf("Case %d: 1\n",i);
		else
			printf("Case %d: %lld\n",i,sum());
		
	}
	return 0;
}
