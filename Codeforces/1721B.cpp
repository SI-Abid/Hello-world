#include<bits/stdc++.h>
using namespace std;

int getDist(int x1,int y1,int x2,int y2)
{
    return abs(x1-x2)+abs(y1-y2);
}

int main()
{
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n,m,x,y,d;
        cin>>n>>m>>x>>y>>d;
        // bool startBlock=false;
        // bool endBlock=false;
        if((getDist(1,y,x,y)>d and getDist(x,m,x,y)>d) or (getDist(n,y,x,y)>d and getDist(x,1,x,y)>d))
        {
            cout<<n+m-2<<'\n';
        }
        else
        {
            cout<<"-1\n";
        }
    }
    return 0;
}