#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int _;
    cin>>_;
    for(int tc=1;tc<=_;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n,a,b;
        cin>>n>>a>>b;
        if(a>b)
        {
            cout<<"1\n";
        }
        else
        {
            cout<<(n+a-1)/a<<endl;
        }
    }
    return 0;
}
// 8887888999 6