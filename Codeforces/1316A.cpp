#include "bits/stdc++.h"
#define uint unsigned int
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, m;
		cin>>n>>m;
		int a[n];
		int sum=0;
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		if(sum<m)
			cout<<sum;
		else
			cout<<m;
		cout<<endl;
	}
	return 0;
}
