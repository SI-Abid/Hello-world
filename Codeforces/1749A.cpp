#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int _;
    cin>>_;
    for(int tc=1;tc<=_;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n,m;
        cin>>n>>m;
        set<int> row,col;
        while(m--)
        {
            int u,v;
            cin>>u>>v;
            row.insert(u);
            col.insert(v);
        }
        if(row.size()<n or col.size()<n)
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