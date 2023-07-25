#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int n,m;
    cin>>n>>m;
    int ans=0;
    while(n!=m)
    {
        if(m>n)
        {
            if(m%2==0)
            {
                m/=2;
            }
            else
            {
                m++;
            }
        }
        else
        {
            m++;
        }
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}