#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a1,a2,a3,b1,b2,b3;
    cin>>a1>>a2>>a3>>b1>>b2>>b3;
    int n;
    cin>>n;
    int a=a1+a2+a3;
    int b=b1+b2+b3;
    int self=0;
    self+=(a+4)/5;
    self+=(b+9)/10;
    self>n?cout<<"NO"<<endl:cout<<"YES"<<endl;
    return 0;
}