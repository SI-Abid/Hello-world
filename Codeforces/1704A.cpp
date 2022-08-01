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
        string a,b;
        cin>>n>>m;
        cin>>a>>b;
        int a1,b1,a0,b0;
        a1=bitset<50>(a).count();
        b1=bitset<50>(b).count();
        a0=n-a1;
        b0=m-b1;
        bool issuffix=false;
        if(a.substr(n-m+1,m-1)==b.substr(1,m-1))
        {
            issuffix=true;
        }
        if(a1<b1 or a0<b0)
        {
            cout<<"NO\n";
        }
        else if(issuffix)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}