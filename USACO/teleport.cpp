#include<iostream>
using namespace std;
int main()
{
	freopen("teleport.in","r",stdin);
	freopen("teleport.out","w",stdout);
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a>b) swap(a,b);
	if(c>d) swap(c,d);
	cout << min(abs(a-c)+abs(b-d),b-a);
	return 0;
}
