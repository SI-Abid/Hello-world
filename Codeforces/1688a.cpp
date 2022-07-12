#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int m=n;
        if(n&1)
        {
            if(n==1)
            {
                cout<<"3\n";
            }
            else
            {
                cout<<"1\n";
            }
            continue;
        }
        int ans=0;
        while (n>0)
        {
            if(n&1 and n>1)
            {
                break;
            }
            ans++;
            n/=2;
        }
        if(n==0)
        {
            cout<<m+1<<"\n";
        }
        else
        {
            cout<< (1<<ans)<<"\n";
        }
    }
    return 0;
}