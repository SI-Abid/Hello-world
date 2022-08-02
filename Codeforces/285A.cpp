#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    if(k)
    {
        for (int i = k + 1; i > 0; i--)
        {
            cout<<i<<" ";
        }
        for (int i = k+2; i <= n; i++)
        {
            cout<<i<<" ";
        }
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            cout<<i<<" ";
        }
    }
    
    return 0;
}