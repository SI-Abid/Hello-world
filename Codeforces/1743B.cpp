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
        vector<int> a;
        for(int i=1;i<=n/2;i++)
        {
            a.push_back(i);
            a.push_back(n-i+1);
        }
        if(a.size()!=n)
        {
            a.push_back(n/2+1);
        }
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<'\n';
    }
    return 0;
}