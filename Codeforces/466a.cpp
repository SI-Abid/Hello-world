#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    // EK LINE E KORSI, TAKE THAT
    cout<<min(n*a,(n/m)*b+min((n%m)*a,b))<<endl;

    return 0;
}