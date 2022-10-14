#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        // printf("Case %d: ",tc);
    
        int a,b,c;
        cin>>a>>b>>c;
        int ans=a+b+c;
        int big=max(a,max(b,c));
        if(ans==big*2)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    
    }
    return 0;
}