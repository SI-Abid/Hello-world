#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n;
        cin>>n;
        string a,b;
        cin>>a>>b;
        replace(a.begin(),a.end(),'G','B');
        replace(b.begin(),b.end(),'G','B');
        if(a==b)
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