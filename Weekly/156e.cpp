#include<bits/stdc++.h>
using namespace std;

double binpow(double x, int n)
{
    if(n == 0)
        return 1;
    if(n == 1)
        return x;
    if(n % 2 == 0)
        return binpow(x * x, n / 2);
    else
        return x * binpow(x * x, n / 2);
}

int main()
{
    int m,n;
    cin>>m>>n;
    double ans = 0;
    for(int i = 1; i < m; i++)
    {
        ans += binpow(1.0 * i / m, n);
    }
    cout<<fixed<<setprecision(10)<< m-ans <<endl;
    return 0;
}