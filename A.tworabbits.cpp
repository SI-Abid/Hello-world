#include "bits/stdc++.h"
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x, y, a, b, result;
		cin>>x>>y>>a>>b;
		result=(y-x)/(a+b);
		if((y-x)%(a+b)!=0)
			cout<<"-1"<<endl;
		else
			cout<<result<<endl;
	}
	return 0;
}
