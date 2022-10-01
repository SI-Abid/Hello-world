#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n%2==0)
    {
        puts("-1");
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        cout<<i<<" ";
    }
    puts("");
    for(int i=0;i<n;i++)
    {
        cout<<((i+1)%n)<<" ";
    }
    puts("");
    for(int i=0;i<n;i++)
    {
        cout<<((i+i+1)%n)<<" ";
    }
    return 0;
}