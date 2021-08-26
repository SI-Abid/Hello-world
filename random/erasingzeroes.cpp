//https://codeforces.com/contest/1303/problem/A
#include "bits/stdc++.h"
#define uint unsigned int
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int count, total=0;
		while(s[s.size()-1]=='0')
		{
			s.pop_back();
			if(s.size()==0)
				break;
		}	
		if(s.size()==0)
		{
			cout<<0<<endl;
			continue;
		}
		else
		for (uint i=0; i<s.size()-1; i++)
		{
			if (s[i]=='1')
			{
				count=0;
				while(s[i+1]=='0')
				{	
					count++;
					i++;
				}
				total+=count;
			}
		}
		cout<<total<<endl;
	}
	return 0;
}
