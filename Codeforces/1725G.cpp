#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n<3)
    {
        cout<<2*n+1<<'\n';
        return 0;
    }
    int x = n/3;
    int y = n%3;
    cout<< (4*x)+3+y <<'\n';
    return 0;
}