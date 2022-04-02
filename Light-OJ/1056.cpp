#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for (int tc = 1; tc <= t; tc++)
    {
        int a,b;
        char c;
        cin>>a>>c>>b;
        double pi=2*acos(0.0);
        double x= 400 / ((pi*b)+(2*(a-b)));
        cout<<"Case "<<tc<<": ";
        cout<<setprecision(6)<<fixed<< a*x << " "<<b*x <<"\n";
    }
    return 0;
}