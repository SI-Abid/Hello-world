#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int _;
    cin>>_;
    string PI = "314159265358979323846264338327";
    for(int tc=1;tc<=_;tc++)
    {
        // printf("Case %d: ",tc);
    
        string n;
        cin>>n;
        int i = 0;
        for(;i<n.size();i++)
        {
            if(n[i]!=PI[i])
            {
                break;
            }
        }
        cout<<i<<endl;
    }
    return 0;
}