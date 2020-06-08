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
	string s;
	cin>>s;
	int l = s.size();
	int count = 0;
	bool dang = false;
	for(int i=0; i<l; i++)
	{
		count=0;
		for(int j=i; s[j]=='1'; j++)
		{
			count++;
		}
		if(count>=7)
		{
			dang=true;
			break;
		}
	}
	for(int i=0; i<l; i++)
	{
		count=0;
		for(int j=i; s[j]=='0'; j++)
		{
			count++;
		}
		if(count>=7)
		{
			dang=true;
			break;
		}
		i+=count;
	}
	dang?cout<<"YES\n":cout<<"NO\n";
	return 0;
}
