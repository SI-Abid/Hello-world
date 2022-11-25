#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int _;
    cin>>_;
    for(int tc=1;tc<=_;tc++)
    {
        // printf("Case %d: ",tc);
    
        int a,b,c;
        cin>>a>>b>>c;
        int d=abs(b-c)+c;
        if(a==d)
        {
            cout<<"3\n";
        }
        else if(a<d)
        {
            cout<<"1\n";
        }
        else
        {
            cout<<"2\n";
        }
    }
    return 0;
}