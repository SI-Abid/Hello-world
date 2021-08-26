#include "bits/stdc++.h"
using namespace std;

int main()
{
	map<char, int> mp;
	
	string str;
	
	cin >> str;
	
	for (unsigned int i=0; i < str.length(); i++)
	{
		mp[str[i]]++;
	}
	bool flag=false;
	
	for (unsigned int i=0; i<str.length(); i++)
	{
		if (mp[str[i]]==1)
		{
			cout<<str[i];
			flag=true;
		}
	}
	if (!flag)
		cout<<"Null Bro!";
		
	cout << endl;
	
	return 0;
}
