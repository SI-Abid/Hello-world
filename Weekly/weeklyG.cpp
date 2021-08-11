#include "bits/stdc++.h"
using namespace std;
map <int, int> mp[200001];
int main()
{
	int n, x, y;
	cin>>n;
	
	for (int i=0; i<n-1; i++)
	{
		cin>>x>>y;
		mp[x][y]=1;
		mp[y][x]=1;
	}
	int a[n];
	for (int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	int j=1;
	for(int i=0; i<n; i++)
	{
		while(mp[a[i]][a[j]])
			j++;
	}
	if(j==n && a[0]==1) 
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
	
	return 0;
}
