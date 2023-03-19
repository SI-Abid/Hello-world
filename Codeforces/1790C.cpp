#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int _;
    cin>>_;
    for(int tc=1;tc<=_;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n;
        cin>>n;
        map<int,int> m;
        vector<vector<int>> a(n,vector<int>(n-1));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-1;j++)
            {
                cin>>a[i][j];
            }
            m[a[i][0]]++;
        }
        int mx=0;
        if(m.begin()->second==1)
        {
            mx=m.rbegin()->first;
        }
        else
        {
            mx=m.begin()->first;
        }
        for(int i=0;i<n;i++)
        {
            if(a[i][0]!=mx)
            {
                cout<<mx;
                for(int j=0;j<n-1;j++)
                {
                    cout<<" "<<a[i][j];
                }
                cout<<endl;
                break;
            }
        }
    }
    return 0;
}