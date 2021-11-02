#include<iostream>
using namespace std;

int main()
{
	int n,cur;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	int MAX=-1,MIN=200;
	int mxp,mnp;
	for(int i=0; i<n; i++)
	{
		cur=ar[i];
		if(cur>MAX)
		{
			MAX=cur;
			mxp=i;
		}
	       	if(cur<=MIN)
		{
			MIN=cur;
			mnp=i;
		}
	}
	int ans=mxp+(n-1-mnp);
	if(mxp>mnp)ans--;
	cout<<ans<<endl;
	return 0;
}
