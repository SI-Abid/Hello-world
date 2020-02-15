#include "bits/stdc++.h"
using namespace std;
int str2int(string s)
{
	int out=0;
	for(int i=0; i<(int)s.size(); i++)
	{
		if(s[i]>='0' && s[i]<='9')
		{
			out*=10;
			out += (s[i]-'0');
		}
		else
			return 0;
	}
	return out;
}
int main()
{
	string a="123";
	cout<<str2int(a);
	return 0;
}
