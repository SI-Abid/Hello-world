#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int a,b,c,x,y,z;
	cin>>a>>b>>c;
	x=sqrt((a*b)/c);
	y=sqrt((a*c)/b);
	z=sqrt((b*c)/a);
	cout<<4*(x+y+z)<<endl;
	return 0;
}
