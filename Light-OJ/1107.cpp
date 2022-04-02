#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++)
    {
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        int q;
        cin>>q;
        cout<<"Case "<<tc<<":\n";
        while(q--)
        {
            int x,y;
            cin>>x>>y;
            if(x>=x1 && x<=x2 && y>=y1 && y<=y2)
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
        }
    }
    return 0;
}