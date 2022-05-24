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
            ans+=(x-1);
        }
        if(ans%2==1)
        {
            cout<<"errorgorn\n";
        }
        else
        {
            cout<<"maomao90\n";
        }
    }
    return 0;
}