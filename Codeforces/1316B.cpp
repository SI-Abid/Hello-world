#include "bits/stdc++.h"
#define uint unsigned int
using namespace std;

string modified(string& s, int n, int k)
{	
	string prefix, suffix;
	prefix = s.substr(k-1, n-k+1);
	suffix = s.substr(0, k-1);
	if(n%2 == k%2)
	{
		reverse(suffix.begin(), suffix.end());
	}
	return prefix+suffix;
}

int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		int l; string s;
		cin>>l>>s;
		string new_s, temp;
		new_s = modified(s, l, 1);
		int k = 1;
		for (int j=2; j<=l; j++)
		{
			temp = modified(s, l, j);
			if( temp < new_s)
			{
				new_s = temp;
				k = j;
			}
			
		}
		cout<<new_s<<endl<<k<<endl;
	}
	return 0;
}
