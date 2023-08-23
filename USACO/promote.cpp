#include<iostream>
using namespace std;
int main()
{
	freopen("promote.in","r",stdin);
	freopen("promote.out","w",stdout);
	int g,s,p;
	g=s=p=0;
	int a,b;
	int del;
	cin>>a>>b;
	cin>>a>>b;
	del=b-a;
	s=del;
	cin>>a>>b;
	del=b-a;
	g=del;s+=del;
	cin>>a>>b;
	del=b-a;
	p=del;g+=del;s+=del;
	cout<<s<<endl;
	cout<<g<<endl;
	cout<<p<<endl;
	return 0;
}
