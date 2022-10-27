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
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        if(a.front()==a.back())
        {
            cout<<(a[0]==1?n:0)<<"\n";
            continue;
        }
        int ans=0;
        for(int i=1;i<n;i++)
        {
            
        }
    }
    return 0;
}