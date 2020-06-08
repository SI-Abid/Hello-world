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
	int n, k, w, res=0;
	cin>>k>>n>>w;
	for(int i=1; i<=w; i++)
	{
		res+=(k*i);
	}
	if(res>n)
		cout<<res-n<<endl;
	else
		cout<<"0\n";
	return 0;
}
