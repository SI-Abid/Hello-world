#include "bits/stdc++.h"
using namespace std;
/*
int main()
{
	int x, y;
	cin>>x>>y;
	tie(x, y) = make_pair(y,x);	// set a tuple and reverse pair to swap the x and y
	cout<<x<<" "<<y<<endl;
	return 0;
}*/
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int oddcount=0, evencount=0;
		int nums[n];
		for(int i=0; i<n; i++)
		{
			cin>>nums[i];
			if(nums[i]&1)
				oddcount++;
			else evencount++;
				
		}
		
		if (oddcount&1) cout<<"YES"<<endl;
		else if	(oddcount>0 && oddcount%2==0 && evencount>0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}
