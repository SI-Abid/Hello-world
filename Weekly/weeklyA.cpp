#include "bits/stdc++.h"
#define uint unsigned int
#define ll long long
using namespace std;
int main ()
{
	int count =0;
	ll n;
	cin>>n;
	while(n>0)
	{
		if(n%10==4 || n%10==7)
		{
			count++;
		}
		n/=10;
	}
	if (count==4 || count==7)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	
	return 0;
}
