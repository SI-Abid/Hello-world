#include<bits/stdc++.h>
using namespace std;

signed main()
{
    freopen("input.txt","r",stdin);
    freopen("myput.txt","w",stdout);
    int n,x,y;
    cin>>n>>x>>y;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        if((a+b)%2==(x+y)%2)
        {
            puts("gese gi");
        }
        else
        {
            puts("jaito na");
        }
    }
    return 0;
}