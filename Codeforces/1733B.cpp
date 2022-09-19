#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n,x,y;
        cin>>n>>x>>y;
        if(x==0 ^ y==0)
        {
            int win=x+y;
            if((n-1)%win!=0)
            {
                cout<<"-1"<<'\n';
                continue;
            }
            for(int i=2;i<=n;i+=win)
            {
                for(int j=0;j<win;j++)
                {
                    cout<<i<<' ';
                }
            }
            cout<<'\n';
        }
        else
        {
            cout<<"-1"<<'\n';
        }
    }
    return 0;
}