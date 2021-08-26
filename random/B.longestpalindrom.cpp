#include "bits/stdc++.h"
using namespace std;
string sets[105];
bool palindrom(string f)
{
	int size = (int)f.size();
	for(int i=0; i<size/2; i++)
	{
		if(f[i]!=f[size-i-1])
		{
			return false;
		}
	}
	return true;
}
string reverse(string a)
{
	string ret = "";
	for(int i=(int)a.size()-1; i>=0; i--)
	{
		ret += a[i];
	}
	return ret;
}
int main()
{
	int n, m;
	cin>>n>>m;
	string first="", second="", middle;
	for(int i=0; i<n; i++)
	{
		cin>>sets[i];
	}
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(sets[i]==reverse(sets[j]))
			{	
				first = first + sets[i];
				second = sets[j] + second;
			}
		}
		if(palindrom(sets[i]))
		{	
			middle=sets[i];
		}
	}
	string fin = first+middle+second;
	if((int)fin.size()>0)
		cout<<fin.size()<<endl<<fin<<endl;
	else
		cout<<0;
	return 0;
}
