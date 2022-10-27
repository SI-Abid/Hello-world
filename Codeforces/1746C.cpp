#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int _;
    cin>>_;
    for(int tc=1;tc<=_;tc++)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        map<int,int> pos;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            pos[a[i]] = i+1;
        }
        vector<int> ans;
        for(int i=n;i>=1;i--)
        {
            ans.push_back(pos[i]);
        }
        for(int i=0;i<n;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<'\n';
    }
    return 0;
}