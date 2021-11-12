#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while (t--)
    {
        long long x,y;
        cin>>x>>y;
        switch (y%4)
        {
        case 1:
            y=-y;
            break;
        case 2:
            y=1;
            break;
        case 3:
            y+=1;
            break;
        default:
            y=0;
            break;
        }
        cout<<(x&1?x-y:x+y)<<endl;
    }
    
    return 0;
}