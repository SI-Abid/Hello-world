#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x, y;
        cin>>x>>y;
        if((x+y)&1)
        {
            cout<<"-1 -1"<<endl;
        }
        else if(x%2==0 && y%2==0)
        {
            cout<<x/2<<" "<<y/2<<endl;
        }
        else
        {
            int dis = (x+y)/2;
            if(x<y)
            {
                cout<<x<<" "<<y-dis<<endl;
            }
            else
            {
                cout<<x-dis<<" "<<y<<endl;
            }
        }
    }
    return 0;
}