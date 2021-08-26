#include "bits/stdc++.h"
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, sum=0, temp=0, count=0;
		cin>>n;
		for(int i=0; i<n; i++)
		{
			cin>>temp;
			sum+=temp;
			if(temp==0)
				count++;
		}
		if(sum==0) count++;
		cout<<count<<endl;
	}
	return 0;
}
