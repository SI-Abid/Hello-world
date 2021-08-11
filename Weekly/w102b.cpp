#include "bits/stdc++.h"
using namespace std;

int main()
{
    int t;
    for(cin>>t; t; t--)
    {
        int n;
        cin>>n;
        if(n==1 || n==2)
            cout<<n-1<<endl;
        else if(n%2==0 || n==3)
            puts("2");
        else 
            puts("3");
    }
    return 0;
}