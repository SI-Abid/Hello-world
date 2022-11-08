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
        // int mini=*min_element(a.begin(),a.end());
        if(a[0]==1)
        {
            cout<<"Yes\n";
        }
        else
        {
            cout<<"No\n";
        }
    
    }
    return 0;
}
