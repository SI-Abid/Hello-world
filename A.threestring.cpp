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
		string a, b, c;
		bool nay = false;
		cin>>a>>b>>c;
		for (int i=0; i<(int)a.size(); i++)
		{
			if(a[i]!=c[i] && b[i]!=c[i])
			{
				cout<<"NO"<<endl;
				nay = true;
				break;
			}
		}
		if(!nay)	cout<<"YES"<<endl;
	}
	return 0;
}
