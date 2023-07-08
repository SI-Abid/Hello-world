#include<bits/stdc++.h>
using namespace std;

bool rec(int n, int m)
{
    if(n<m or n%3!=0) return false;
    int x=n/3;
    int y=2*x;
    return m==x or m==y or rec(x,m) or rec(y,m);
}

signed main()
{
    int _;
    cin>>_;
    for(int tc=1;tc<=_;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n,m;
        cin>>n>>m;
        if(n==m)
        {
            cout<<"YES\n";
            continue;
        }
        if(rec(n,m))
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