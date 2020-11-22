#include "bits/stdc++.h"
using namespace std;

int main()
{
    // freopen("in.txt", "r", stdin);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n==1 || n==2) 
            cout<<n-1<<endl;
        else if(n==3 || n%2==0)
        {
            puts("2");
        }
        else
        {
            puts("3");
        }
    }
    return 0;
}