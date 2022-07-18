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
        vector<vector<int>> edge(n+1);
        for(int i=0;i<n;i++)
        {
            int x, y;
            cin>>x>>y;
            edge[i].push_back(x);
            edge[i].push_back(y);
        }
        int q;
        cin>>q;
        while(q--)
        {
            cin>>n;
            vector<int> path(n);
            for(int i=0;i<n;i++)
            {
                cin>>path[i];
            }
            int start=path[0];
            int end=path[n-1];
            bool flag=true;
        }
    }
    return 0;
}