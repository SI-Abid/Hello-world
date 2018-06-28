#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, k=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    i=0;
    while(1)
    {
        if(a[i]<=k)
        {
            cout<<i+1<<endl;
            return 0;
        }
        else
        {
            if(i==n-1)
            {
                i=0;
            }
            else{
                i++;
            }
        }
        k++;
    }
}
