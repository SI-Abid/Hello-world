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
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int flag=1;
        int ans=1;
        for(int i=0;i<n;i++)
        {
            if(a[i]==1)
            {
                if(i>0 && a[i-1]==1)
                {
                    ans+=5;
                }
                else
                {
                    ans++;
                }
            }
            else
            {
                if(i>0 && a[i-1]==0)
                {
                    flag=0;
                }
            }
        }
        if(flag==0)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<ans<<endl;
        }
    }
    return 0;
}