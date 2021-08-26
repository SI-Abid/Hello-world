#include "bits/stdc++.h"
using namespace std;
set<int>a;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, x;
		
		cin>>n>>x;
		
		int  m=0;
		
		for(int i=0; i<n; i++)
		{
			int temp;
			cin>>temp;
			a.insert(temp);
			m = max(m,temp);
		}
		if(a.count(x))
			cout<<1<<endl;
		else
			cout<<max(2, (x+m-1)/m)<<endl;
		a.clear();
	}
	
	return 0;
}
