#include "bits/stdc++.h"

using namespace std;

int main()
{
	bool a[10][10]={false};
	int x, y, edge, node;
	cin>>node>>edge;
	for (int i=0;i<edge;i++)
	{
		cin>>x>>y;
		a[x][y]=true;
	}
	for (int i=1;i<=node;i++)
	{
		for (int j=1;j<=node;j++)
		{
			if(a[i][j])
				printf("There is an edge between %d and %d\n",i,j);
			//else
				//printf("There is no edge between %d and %d\n",i,j);
		}
	}
	return 0;
}
