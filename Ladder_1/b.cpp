#include<iostream>
using namespace std;

int main()
{
	int x,y;
	int z;
	for(int i=0;i<5;i++)
		for(int j=0;j<5;j++)
		{
			cin>>z;
			if(z==1)
			{
				x=i;
				y=j;
			}
		}
	int d=abs(2-x)+abs(2-y);
	cout<<d<<endl;
	return 0;
}
