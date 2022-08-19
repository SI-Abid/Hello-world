#include <bits/stdc++.h>
using namespace std;


int main()
{
    int a,b,c,n,ans;
    cin>>a>>b>>c>>n;
    a-=c;
    b-=c;
    ans=n-a-b-c;
    if(a<0 || b<0)
    {
        cout<<"-1";
    }

    else if(ans<=0)
    {
        cout<<"-1";
    }
    else
    {
        cout<<ans;
    }
    return 0;
}
