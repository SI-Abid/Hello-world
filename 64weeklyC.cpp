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

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a, b, c;
		cin>>a>>b>>c;
		int cust=0;
		
		int x = max(a, max(b, c));
		int z = min(a, min(b, c));
		int y = (a+b+c)-(x+z);
		
		if(x>0)
		{
			x--;
			cust++;
		}
		if(y>0)
		{
			y--;
			cust++;
		}
		if(z>0)
		{
			z--;
			cust++;
		}
		if(x>0 && y>>0)
		{
			x--;
			y--;
			cust++;
		}
		if(y>0 && z>0)
		{
			y--;
			z--;
			cust++;
		}
		if(x>0 && z>0)
		{
			x--;
			z--;
			cust++;
		}
		if(x>0 && y>0 && z>0)
			cust++;
			
		cout<<cust<<endl;
	}
	return 0;
}
