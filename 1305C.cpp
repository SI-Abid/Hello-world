#include "bits/stdc++.h"
#define uint unsigned int
using namespace std;

int n, m, a[200000], prod=1;

int main()
{
	cin>>n>>m;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	for(int i=0; i<n-1; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			prod*=max(a[i],a[j])-min(a[i],a[j]);
			if(prod>45000)
				prod %= m;
		}
	}
	prod %= m;
	cout<<prod;
	return 0;
}
