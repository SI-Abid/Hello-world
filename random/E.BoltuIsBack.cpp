#include "bits/stdc++.h"

using namespace std;

int main()
{
	int sum=0, n, x, i, max=0;
	cin>>n>>x;
	int arr[n+x-1];
	for (i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	for(; i<n+x-1; i++)
	{
		arr[i]=arr[i-x-2];
	}
	for (i=0; i<x; i++)
	{
		sum += arr[i];
	}
	max=sum;
	for( ; i<n+x-1; i++)
	{

		sum = sum - arr[i-x] + arr[i];
		if(max<sum)
			max=sum;
	}
	cout<<max<<endl;
	return 0;
}
