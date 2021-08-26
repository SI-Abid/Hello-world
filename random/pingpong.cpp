#include "bits/stdc++.h"
using namespace std;

vector < pair<int, int> > adj;
bool vis[110];

void bfs(int src)
{
	pair <int, int> x = adj[src];
	vis[src] = true;
	
	for(int i=0; i< (int)adj.size(); i++)
	{
		pair <int, int> y = adj[i];
		if(vis[i])
			continue;
		if((x.first>y.first && x.first<y.second)||(x.second>y.first && x.second<y.second))
			bfs(i);
	}
}

int main()
{
	int t;
	cin>>t;
	int x, y, de;
	while(t--)
	{
		
		cin>>de>>x>>y;
		if(de==1)
		{
			adj.push_back(pair(x,y));
		}
		else
		{
			memset(vis,0,size(vis));
			bfs(x-1);
			if(vis[y-1])
				cout<<"YES\n";
			else
				cout<<"NO\n";
		}
	}
	return 0;
}
