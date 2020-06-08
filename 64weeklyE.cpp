#include "bits/stdc++.h"
#define MP make_pair
#define PB push_back
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
using namespace std;
using ll = long long;
using uint = unsigned int;
using pii = pair<int, int>;
using vi = vector <int>;

vi v[100005];
ll cnt[2];
void dfs(int node, int pode, int color)
{
	cnt[color]++;
	for(int i=0; i<v[node].size(); i++)
	{
		if(v[node][i]!=pode)
			dfs(v[node][i], node, !color);
	}
}

int main()
{
	int n;
	cin>>n;
	
	for(int i=1; i<n; i++)
	{
		int a, b;
		cin>>a>>b;
		v[a].PB(b);
		v[b].PB(a);
	}
	
	dfs(1,0,0);
	cout<<cnt[0]*cnt[1]-n+1<<endl;
	
	return 0;
}
