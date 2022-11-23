#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int _;
    cin>>_;
    for(int tc=1;tc<=_;tc++)
    {
        // printf("Case %d: ",tc);
    
        int l,r,x,a,b;
        cin>>l>>r>>x>>a>>b;
        if(a>b)
        {
            swap(a,b);
        }
        if(a==b)
        {
            cout<<"0"<<endl;
        }
        else if(abs(a-b)>=x)
        {
            cout<<"1"<<endl;
        }
        else if(abs(a-l)>=x and abs(b-l)>=x)
        {
            cout<<"2"<<endl;
        }
        else if(abs(a-r)>=x and abs(b-r)>=x)
        {
            cout<<"2"<<endl;
        }
        else if(abs(a-r)>=x and abs(b-l)>=x)
        {
            cout<<"3"<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }
    return 0;
}