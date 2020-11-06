#include "bits/stdc++.h"

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int s;
        cin>>s;
        int ans=0, mx=1000000000;
        while(s>0)
        {
            while(s<mx)
            {
                mx/=10;
            }
            ans+=mx;
            s-= mx-mx/10;
        }
        cout<<ans<<endl;
    }
    return 0;
}
