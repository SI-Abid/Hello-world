#include "bits/stdc++.h"
#define mp make_pair
#define pb push_back
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
		int a, b;
		cin>>a>>b;
		if(a%b==0)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}
