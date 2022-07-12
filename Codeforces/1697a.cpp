#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int sum=0;
        while(n--)
        {
            int a;
            cin>>a;
            sum+=a;
        }
        if(sum>m)
        cout<<sum-m<<endl;
        else
        cout<<"0"<<endl;
    }
    return 0;
}