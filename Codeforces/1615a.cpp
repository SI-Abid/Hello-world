#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ans=0;
        for(int i=0,x;i<n;i++)
        {
            cin>>x;
            ans+=x;
        }
        if(ans%n==0)
            cout<<"0\n";
        else
            cout<<"1\n";
    }
    return 0;
}