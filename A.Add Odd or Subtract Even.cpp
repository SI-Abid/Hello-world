#include "bits/stdc++.h"
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a , b;
		cin>>a>>b;
		if(a > b)
		{
			if((a-b)&1)
				cout<<2;
			else
				cout<<1;
		}
		else if(a < b)
		{
			if((a-b)&1)
				cout<<1;
			else
				cout<<2;
		}
		else 
			cout<<0;
		
		cout<<endl;
	}
	
	return 0;
}