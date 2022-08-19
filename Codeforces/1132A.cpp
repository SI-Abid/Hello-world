#include<iostream>
#include<algorithm>
#include<string.h>
#include<ctype.h>
#include<stack>
using namespace std;
#define ll long long 


int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	if ((a == d&&a!=0)||(a+c+d==0))
		cout << 1 << endl;
	else
		cout << 0 << endl;
}