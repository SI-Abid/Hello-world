#include "bits/stdc++.h"
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n]; 
		vector <int> odd;
		int oddcount=0;
		int in=0;
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
			if(a[i]%2==0)
				in=i+1;
			else {
				odd.push_back(i+1);
				oddcount++;
			}
		}
		if(in!=0)
			cout<<"1\n"<<in<<endl;
		else if(oddcount>=2)
		{
			cout<<"2\n";
			cout<<odd[0]<<" "<<odd[1]<<endl;
		}
		else
			cout<<"-1\n";
	}
	return 0;
}
