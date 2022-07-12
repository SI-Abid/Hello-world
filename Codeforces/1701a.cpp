#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        // printf("Case %d: ",tc);
    
        int ans=0;
        int x;
        for (size_t i = 0; i < 4; i++)
        {
            cin>>x;
            ans+=x;
        }
        if(ans==0)
        {
            cout<<"0\n";
        }
        else if(ans==4)
        {
            cout<<"2\n";
        }
        else
        {
            cout<<"1\n";
        }
    
    }
    return 0;
}