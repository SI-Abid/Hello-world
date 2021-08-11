#include "bits/stdc++.h"
#include "vector"
#define uint unsigned int
using namespace std;

int gcd(int a, int b)
{
	if(b==0)
		return a;
	else
		return gcd(b, a%b);
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	int count=0;
	for(int i=0; i<n-1; i++)
	{
		if(gcd(a[i],a[i+1])!=1)
			count++;
	}
	cout<<count<<endl;
	for(int i=0; i<n-1; i++)
	{
		cout<<a[i]<<" ";
		if((gcd(a[i],a[i+1])!=1))
			cout<<"1 ";
	}
	cout<<a[n-1]<<endl;
	return 0;
}
