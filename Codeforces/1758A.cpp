#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int _;
    cin>>_;
    for(int tc=1;tc<=_;tc++)
    {
        // printf("Case %d: ",tc);
    
        string s,t;
        cin>>s;
        t=s;
        reverse(t.begin(),t.end());
        cout<<s<<t<<endl;
    
    }
    return 0;
}