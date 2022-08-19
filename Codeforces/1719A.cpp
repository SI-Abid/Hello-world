#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n,m;
        cin>>n>>m;
        n%=2;
        m%=2;
        if(n^m)
        {
            cout<<"Burenka\n";
        }
        else
        {
            cout<<"Tonya\n";
        }
    }
    return 0;
}